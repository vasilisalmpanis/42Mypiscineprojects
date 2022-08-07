/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:42:44 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 09:51:47 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	if (nb < 0)
		return (0);
	temp = nb;
	if (nb == 0)
		return (1);
	while (temp > 1)
	{
		nb = nb * (temp - 1);
		temp--;
	}
	return (nb);
}

/* #include <stdio.h>
int	main(void)
{
	int nbr = 5;
	printf("%d\n", ft_iterative_factorial(nbr));
}

 */
