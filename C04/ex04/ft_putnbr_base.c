/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 15:56:53 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/17 15:17:39 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	check_base_valid(char *base, int *ascii)
{
	int	i;
	int	c;

	i = 0;
	while (base[i] != '\0')
	{
		if (!((base[i] >= '0' && base[i] <= '9')
				|| (base[i] >= 'A' && base[i] <= 'Z')
				|| (base[i] >= 'a' && base[i] <= 'z')))
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	convert_rec(long lnbr, long baselen, char *base)
{
	char	c;

	if (lnbr >= baselen)
	{
		convert_rec(lnbr / baselen, baselen, base);
		convert_rec(lnbr % baselen, baselen, base);
	}
	else if (lnbr < baselen)
	{
		c = base[lnbr];
		write(1, &c, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;
	long	baselen;
	int		ascii[128];
	int		i;

	i = 0;
	lnbr = (long)nbr;
	baselen = (long)ft_strlen(base);
	while (i < 128)
	{
		ascii[i] = 0;
		i++;
	}
	if (baselen < 2)
		return ;
	else if (check_base_valid(base, ascii) == 0)
		return ;
	else if (lnbr < 0)
	{
		write(1, "-", 1);
		convert_rec((-1) * lnbr, baselen, base);
	}
	else
		convert_rec(lnbr, baselen, base);
}
/*
int	main(void)
{
	int	nbr = -214;
	char	*base1 = "poneyvif";
	char	*base2 = "0123456789";
	char	*base3 = "01";
	char	*base4 = "0123456789abcdef";
	char	*base5 = "+123-";
	char	*base6 = "1";

	ft_putnbr_base(nbr, base1);
	printf("--- base1\n");
	ft_putnbr_base(nbr, base2);
        printf("--- base2\n");
	ft_putnbr_base(nbr, base3);
        printf("--- base3\n");
	ft_putnbr_base(nbr, base4);
        printf("--- base4\n");
	ft_putnbr_base(nbr, base5);
        printf("--- base5\n");
	ft_putnbr_base(nbr, base6);
        printf("--- base6\n");
}
*/
