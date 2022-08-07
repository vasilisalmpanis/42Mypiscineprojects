/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:14:21 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 10:03:42 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	temp;

	temp = 1;
	if (nb > 0)
	{
		while (temp * temp <= nb)
		{
			if (temp * temp == nb)
				return (temp);
			else if (temp >= 46341)
				return (0);
			temp++;
		}
	}
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	int number;

	number = -2;
	while (number < 100000)
	{
		printf("sqrt(%d) = %d\n", number, ft_sqrt(number));
		number++;
	}
	printf("sqrt(%d) = %d\n", 100000, ft_sqrt(10000));
}

 */
