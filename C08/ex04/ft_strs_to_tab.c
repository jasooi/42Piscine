/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:46:51 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/21 22:46:09 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest = (char *)malloc(i * sizeof(char));
	if (dest != NULL)
	{
		while (j < i)
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*return_ptr;
	int			i;

	i = 0;
	return_ptr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!return_ptr)
		return (0);
	while (i < ac)
	{
		return_ptr[i].str = av[i];
		return_ptr[i].size = ft_strlen(av[i]);
		return_ptr[i].copy = ft_strdup(av[i]);
		i++;
	}
	return_ptr[i].str = 0;
	return_ptr[i].size = 0;
	return_ptr[i].copy = 0;
	return (return_ptr);
}
/*
#include<stdio.h>
int	main(int  ac, char **av)
{
	t_stock_str *point = ft_strs_to_tab(ac, av);
	int i = 0;
	while (i < ac)
	{
	printf("%i\n", point[i].size);
	printf("%s\n", point[i].str);
	printf("%s\n", point[i].copy);
	i++;
	}
}
*/
