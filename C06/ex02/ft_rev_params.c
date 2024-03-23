/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 22:08:08 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/18 17:40:48 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	char	*str_ptr;

	i = argc - 1;
	if (argc > 1)
	{
		while (i > 0)
		{
			str_ptr = argv[i];
			print_string(str_ptr);
			write(1, "\n", 1);
			i--;
		}
	}
	return (1);
}
