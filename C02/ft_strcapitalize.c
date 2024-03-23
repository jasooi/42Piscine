/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:26:08 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/08 15:00:46 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

char	up_t(char c)
{
	if (c >= 'A' && c <= 'Z')
		return ('Y');
	else
		return ('N');
}

char	low_t(char c)
{
	if (c >= 'a' && c <= 'z')
		return ('Y');
	else
		return ('N');
}

char	num_t(char c)
{
	if (c >= '0' && c <= '9')
		return ('Y');
	else
		return ('N');
}

char	alphanum_test(char c)
{
	if (num_t(c) == 'N' && up_t(c) == 'N' && low_t(c) == 'N')
		return ('N');
	else
		return ('Y');
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	start;

	i = 0;
	start = 'Y';
	while (str[i] != '\0')
	{
		if (alphanum_test(str[i]) == 'N')
			start = 'Y';
		else
		{
			if (start == 'Y' && low_t(str[i]) == 'Y')
				str[i] = str[i] - 32;
			if (start == 'N' && up_t(str[i]) == 'Y')
				str[i] = str[i] + 32;
			start = 'N';
		}
		i++;
	}
	return (str);
}
