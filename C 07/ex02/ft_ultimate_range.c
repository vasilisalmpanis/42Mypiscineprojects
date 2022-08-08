/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 10:07:58 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/08 11:37:15 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*box;
	int	temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	box = (int *)malloc(sizeof(int) * size);
	if (box == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = box;
	temp = min;
	while (temp < max)
	{
		*box = temp;
		box++;
		temp++;
	}
	return (size);
}

/* #include <stdio.h>
int main(void)
{
	int *range;
	int size;
	int index = 0;

	size = ft_ultimate_range(&range, 5, 10);
	printf("min = %d, max = %d, size = %d\n", 5 ,10, size);
	while (index < size)
	{
		printf("%d\n", range[index]);
		index++;
	}
} */
