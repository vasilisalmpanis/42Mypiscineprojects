/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:44:05 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/09 09:27:49 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*array;
	int	*d;
	int	bound;

	if (min >= max)
	{
		return (0);
	}
	bound = (max - min);
	array = (int *)malloc(sizeof(int) * bound);
	d = array;
	if (d == NULL)
		return (0);
	index = 0;
	while (index < bound)
	{
		array[index] = min + index;
		index++;
	}
	return (array);
}

/* int main(void)
{
	int *array;
	array = ft_range(0,1);
}
 */
