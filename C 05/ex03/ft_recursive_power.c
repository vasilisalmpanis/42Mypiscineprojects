/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:30:06 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/03 10:01:30 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>
int main(void)
{
	printf("%d\n", ft_recursive_power(4, 3));
	printf("%d\n", ft_recursive_power(-4, 0));
	printf("%d\n", ft_recursive_power(-4, 1));
	printf("%d\n", ft_recursive_power(-4, 0));
	printf("%d\n", ft_recursive_power(2, 1));
	printf("%d\n", ft_recursive_power(0, 0));
	printf("%d\n", ft_recursive_power(3, 3));
	printf("%d\n", ft_recursive_power(4, -1));
	printf("%d\n", ft_recursive_power(4, 2));
	printf("%d\n", ft_recursive_power(5, 1));
}
 */
