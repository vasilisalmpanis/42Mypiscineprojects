/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:17:40 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/26 18:49:59 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	sc;
	int	i;
	int	c;

	sc = -1;
	while (sc != 0)
	{
		sc = 0;
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i + 1] < tab[i])
			{
				c = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = c;
				sc++;
			}
			i++;
		}
	}
}
