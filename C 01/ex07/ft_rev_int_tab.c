/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:49:56 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/29 09:48:53 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	box;
	int	middle;

	middle = size / 2;
	if (size % 2 == 1)
	{
		middle ++;
	}
	index = 0;
	size --;
	while (size >= middle)
	{
		box = tab[index];
		tab[index] = tab[size];
		tab[size] = box;
		size --;
		index ++;
	}
}
