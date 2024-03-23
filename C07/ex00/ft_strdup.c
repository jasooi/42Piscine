/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:56:32 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/14 14:24:19 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include<stdlib.h>

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
/*
int	main(void)
{
	char	src[50] = "!\n!!!hello 42 students!";
	char	*dest;
	
	dest = ft_strdup(src);
	printf("src is %s\n", src);
	printf("dest is %s\n", dest);
	free(dest);
	return 0;
}
*/
