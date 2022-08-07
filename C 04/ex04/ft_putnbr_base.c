/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:52:59 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/02 10:24:19 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnbr(int nbr, int size, char *base)
{
	int	temp;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * -1;
	}
	if (nbr >= size)
		ft_printnbr(nbr / size, size, base);
	temp = base[nbr % size];
	write(1, &temp, 1);
}

int	ft_checkbase(char *base)
{
	int	index;
	int	index2;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == ' ' || base[index] == '+' || base[index] == '-')
			return (0);
		index++;
	}
	index = 0;
	while (base[index] != '\0')
	{
		index2 = 1;
		while (base[index2] != '\0')
		{
			if (base[index] == base[index + index2])
				return (0);
			index2++;
		}
		index++;
	}
	if (index <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size])
		size++;
	if (ft_checkbase(base) == 1)
		ft_printnbr(nbr, size, base);
}

/* int main(void)
{
	int nbr = -256;
	char base[] = "";

	ft_putnbr_base(nbr, base);
} */
