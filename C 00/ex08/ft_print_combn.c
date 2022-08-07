/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:29:20 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/25 11:56:45 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char first, char second, bool last)
{
	ft_putchar(first);
	ft_putchar(second);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(void)
{
	char	first;
	char	second;
	bool	last;

	first = '0';
	while (first <= '8')
	{
		second = first + 1;
		while (second <= '9')
		{
			last = !(first == '8' && second == '9');
			ft_write_comb(first, second, last);
			first++;
		}
		second++;
	}
}
