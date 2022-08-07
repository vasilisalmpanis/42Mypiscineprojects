/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:23:48 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/26 12:13:55 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	index;
	int	a;

	index = 0;
	a = 0;
	while (str[index] != '\0')
		index++;
	index--;
	while (a <= index)
	{
		ft_putchar(*(str + a));
		a++;
	}
}
