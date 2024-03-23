/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:05:11 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/17 18:25:06 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
/*
int	main(void)
{
	int	i1 = 455;
	int	i2 = 23;
	int	i3 = 500;
	int	i4 = 3;
	int	i5 = 7;

	printf("i1 455 -- %d\n", ft_find_next_prime(i1));
	printf("i2 23 -- %d\n", ft_find_next_prime(i2));
	printf("i3 500 -- %d\n", ft_find_next_prime(i3));
	printf("i4 3 -- %d\n", ft_find_next_prime(i4));
	printf("i5 7 -- %d\n", ft_find_next_prime(i5));

}
*/
