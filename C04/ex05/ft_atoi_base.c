/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:18:55 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/21 13:00:00 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	get_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			break ;
		i++;
	}
	return (i);
}

void	init_ascii(int *base_ascii, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		base_ascii[i] = 0;
		i++;
	}
	base_ascii[45] = 1;
}

int	check_base_valid(char *base, int *ascii)
{
	int	i;
	int	c;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		c = (int)base[i];
		ascii[c] += 1;
		i++;
	}
	i = 0;
	while (i < 128)
	{
		if (ascii[i] > 1)
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	r;
	int	base_ascii[128];
	int	baselen;

	i = 0;
	r = 0;
	init_ascii(base_ascii, 128);
	baselen = ft_strlen(base);
	if (baselen < 2 || !check_base_valid(base, base_ascii))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			base_ascii[45] *= -1;
	}
	while (base_ascii[(int)str[i]] == 1)
	{
		r *= baselen;
		r += get_base_index(str[i++], base);
	}
	return (r * base_ascii[45]);
}
/*
int	main(void)
{
	char	strhex[50] = "   ++--+-f7favrv";
	char	basehex[25] = "0123456789abcdef";
	printf("-63482 - hex: %d \n", ft_atoi_base(strhex, basehex));
	
	char    strbinary[50] = "   110111101010101f7favrv";
        char    basebinary[15] = "01";
	printf("28501 - binary: %d \n", ft_atoi_base(strbinary, basebinary));

	char    strhex2[50] = "   -0003aavrv";
        char    basehex2[25] = "0123456789abcdef";
        printf("-938 - hex: %d \n", ft_atoi_base(strhex2, basehex2));

	char	strdec[5] = " 0";
	char	basedec[15] = "0123456789";
	printf("0 - dec: %d \n", ft_atoi_base(strdec, basedec));
}
*/
