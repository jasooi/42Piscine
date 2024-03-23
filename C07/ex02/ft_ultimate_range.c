/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:54:32 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/14 15:58:19 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*ptr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
		return (-1);
	while (i < size)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (size);
}
/*
int	main(void)
{
	int	min = -10;
	int	max = 0;
	int	*range;
	int	**range_ptr;
	int	size;

	range_ptr = &range;
	size = ft_ultimate_range(range_ptr, min, max);

	for (int i = 0; i < size; i++)
	{
		printf("%d \n", *((*range_ptr) + i));
	}
	printf("%d \n", size);
}
*/
