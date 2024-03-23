/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:25:15 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/21 21:27:14 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i > 46340)
			return (0);
		else if (i > (nb / i))
			return (0);
		else if ((nb / i) == i && (nb % i) == 0)
			return (i);
		else
			i++;
	}
	return (0);
}
