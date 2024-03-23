/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:48:51 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/21 13:55:40 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = ft_strlen(dest);
	j = 0;
	k = ft_strlen(src);
	if ((!dest || !src) && !size)
		return (0);
	if (size < i)
		return (size + k);
	k = k + i;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (k);
}
/*
#include <stdio.h>
#include<bsd/string.h>
int	main(void)
{
	char	string1[20] = "hello";
	char	string2[7] = " world";
	char	string11[20] = "hello";
	char	string22[7] = " world";

	printf("Mine size returned is %d \ndest string is 
%s\n", ft_strlcat(string1, string2,6), string1); 
	printf("actual size returned is %zu \ndest string is 
%s\n", strlcat(string11, string22, 6), string11);
}
*/
