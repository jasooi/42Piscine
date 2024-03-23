/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:38:32 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/21 20:52:52 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nb)
{
	char	r;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr((-1) * nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		r = nb + '0';
		write(1, &r, 1);
	}
}

void	print_val(int *value_arr)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putnbr(value_arr[i]);
		i++;
	}
	write(1, "\n", 1);
}

int	is_legal(int index, int *value_arr)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (value_arr[i] == value_arr[index])
			return (0);
		i++;
	}
	i = 0;
	while (i < index)
	{
		if ((value_arr[index] + index) == (value_arr[i] + i)
			|| (value_arr[index] - index) == (value_arr[i] - i))
			return (0);
		i++;
	}
	return (1);
}

int	solve(int index, int *value_arr)
{
	int	try_value;
	int	solution_count;

	try_value = 0;
	solution_count = 0;
	if (index == 10)
	{
		print_val(value_arr);
		return (1);
	}
	while (try_value < 10)
	{
		value_arr[index] = try_value;
		if (is_legal(index, value_arr))
		{
			solution_count += solve(index + 1, value_arr);
		}
		try_value++;
	}
	return (solution_count);
}

int	ft_ten_queens_puzzle(void)
{
	int	value_arr[10];
	int	solution_count;

	solution_count = 0;
	solution_count = solve(0, value_arr);
	return (solution_count);
}
/*
#include<stdio.h>
int	main(void)
{
	int	s = 0;
	s = ft_ten_queens_puzzle();
	printf("number of solutions is %d \n", s);
}
*/
