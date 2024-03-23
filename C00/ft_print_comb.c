/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:14:47 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/03 18:38:55 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	buffer[5];

	buffer[0] = '0';
	buffer[3] = ',';
	buffer[4] = ' ';
	while (buffer[0] <= '7')
	{
		buffer[1] = buffer[0] + 1;
		while (buffer[1] <= '8')
		{
			buffer[2] = buffer[1] + 1;
			while (buffer[2] <= '9')
			{
				write(1, &buffer, 3);
				if (!(buffer[0] == '7' && buffer[2] == '9'))
				{
					write(1, &buffer[3], 2);
				}
				buffer[2]++;
			}
			buffer[1]++;
		}
		buffer[0]++;
	}
}
