/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasooi <jasooi@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:35:55 by jasooi            #+#    #+#             */
/*   Updated: 2024/03/05 19:31:48 by jasooi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	last_switch_index;
	int	t;

	i = 0;
	last_switch_index = size / 2;
	while (i < last_switch_index)
	{
		t = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - 1 - i] = t;
		i++;
	}
}
