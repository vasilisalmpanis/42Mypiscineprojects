/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 10:02:36 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 08:51:34 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/* #include <stdio.h>
int main(void)
{
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(-4));
	printf("%d\n", ft_fibonacci(-4));
	printf("%d\n", ft_fibonacci(-4));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(7));
}

 */
