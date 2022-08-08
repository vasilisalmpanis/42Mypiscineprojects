/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:44:05 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/08 10:06:08 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	temp;
	int	*array;
	int	bound;

	if (min >= max)
	{
		return (0);
	}
	bound = (max - min) - 1;
	array = (int *)malloc(sizeof(int) * bound);
	if (array == NULL)
		return (0);
	temp = min + 1;
	while (temp < max)
	{
		*array = temp;
		array++;
		temp++;
	}
	return (array);
}

/* int main(void)
{
	ft_range(3,2);
}
 */
