/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:06:26 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 08:55:37 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb < 2)
		return (0);
	while (index <= nb / 2)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && !ft_is_prime(nb))
		nb++;
	return (nb);
}

/* #include <stdio.h>
int main(void)
{
	int nb = 8;
	printf("%d\n", ft_find_next_prime(nb));
}
 */
