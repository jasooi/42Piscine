/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:01:01 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/21 13:33:03 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strcpy(char *dest, char *src, int copy_from)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[copy_from] = src[i];
		i++;
		copy_from++;
	}
	return (copy_from);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_bytes;
	int		copy_from;
	char	*return_str_ptr;

	i = 0;
	copy_from = 0;
	size_bytes = 0;
	while (i < size)
	{
		size_bytes += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return_str_ptr = malloc(size_bytes);
	i = 0;
	while (i < size)
	{
		copy_from = ft_strcpy(return_str_ptr, strs[i], copy_from);
		if (i != size - 1)
			copy_from = ft_strcpy(return_str_ptr, sep, copy_from);
		i++;
	}
	return_str_ptr[copy_from] = '\0';
	return (return_str_ptr);
}
/*
int	main(void)
{
	char	*strs[] = {"", "was", "once", "42", 
"", "a", "small", "village.", "i think"};
	char	sep[3] = ", ";

	printf("%s \n", ft_strjoin(9, strs, sep));
	return 0;
}
*/
