/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:11:51 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 08:55:04 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	if (nb == 0 || nb == 1)
		return (0);
	if (nb < 0)
		return (0);
	index = 2;
	while (index <= nb / 2)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

/* #include <stdio.h>
int main(void)
{
	int nb = 2;
	while (nb < 100)
	{
		printf("NB: %d = %d\n", nb, ft_is_prime(nb));
		nb++;
	}
}
 */
