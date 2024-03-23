/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:25:26 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/14 14:53:47 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
/*
int	main(void)
{
	int	min = 10;
	int	max = 0;
	int	*range;

	range = ft_range(min, max);

	for (int i = 0; i < (max - min); i++)
	{
		printf("%d \n", range[i]);
	}
	free(range);
}
*/
