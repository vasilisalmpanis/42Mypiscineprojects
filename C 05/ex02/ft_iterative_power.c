/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 19:49:10 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 09:55:16 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	temp;

	temp = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power)
	{
		temp *= nb;
		power--;
	}
	return (temp);
}

/* #include <stdio.h>
int	main(void)
{
	int nbr = 150;
	printf("%d\n", ft_iterative_power(nbr, 2));
}
 */
