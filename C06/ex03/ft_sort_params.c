/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:21:42 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/14 12:36:43 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_string(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, (str + i), 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_greater_ascii(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] > str2[j])
			return (1);
		else if (str1[i] < str2[j])
			return (0);
		i++;
		j++;
	}
	return (0);
}

void	sort(int argc, char *tab[])
{
	int		i;
	int		j;
	char	*t;

	i = 1;
	j = argc - 1;
	while (j > 1)
	{
		while (i < j)
		{
			if (is_greater_ascii(tab[i], tab[i + 1]))
			{
				t = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = t;
			}
			i++;
		}
		i = 1;
		j--;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		print_string(argv[1]);
		return (0);
	}
	sort(argc, argv);
	while (i < argc)
	{
		print_string(argv[i]);
		i++;
	}
	return (0);
}
