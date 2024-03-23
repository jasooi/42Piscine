/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:58:06 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/13 17:52:41 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_char(char c)
{
	write(1, &c, 1);
}

void	hex_func(char c)
{
	if (c < 10)
	{
		print_char(c + '0');
		return ;
	}
	else if (c < 16)
	{
		print_char(c - 10 + 'a');
		return ;
	}
	else
	{
		hex_func(c / 16);
		hex_func(c % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			hex_func(str[i]);
		}
		else
		{
			c = str[i];
			write(1, &c, 1);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	str[50] = "hello this\x04 israil to us";

	ft_putstr_non_printable(str);
	return 0;
}
*/
