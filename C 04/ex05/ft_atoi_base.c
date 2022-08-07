/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:27:29 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/02 14:36:16 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

int	ft_getnbr(char *base, char found)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == found)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_getminus(char *str)
{
	int	minus;

	minus = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	return (minus);
}

int	ft_atoi_base(char *str, char *base)
{
	int	temp;
	int	size;
	int	minus;
	int	number;

	if (ft_checkbase(base) == 0)
		return (0);
	size = ft_strlen(base);
	temp = 0;
	number = 0;
	minus = ft_getminus(str);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		str++;
	}
	number = ft_getnbr(base, *str);
	while ((number) != -1)
	{
		temp = (temp * size) + number;
		str++;
		number = ft_getnbr(base, *str);
	}
	return (temp * minus);
}

/* #include <unistd.h>
#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_atoi_base("-123456", "0123456789"));

	printf("%d\n", ft_atoi_base("11110001001000000", "01"));

	printf("%d\n", ft_atoi_base("-1e240", "0123456789abcdef"));

}
 */
