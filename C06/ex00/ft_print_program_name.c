/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:44:13 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/12 21:51:46 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	c;

	i = 0;
	while (argv[0][i] != '\0' && argc >= 1)
	{
		c = argv[0][i];
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
