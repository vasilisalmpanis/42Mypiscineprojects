/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:04:13 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 14:05:34 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	counter;

	if (argc > 1)
	{
		counter = argc - 1;
		while (counter > 0)
		{
			index = 0;
			while (argv[counter][index] != '\0')
			{
				write(1, &argv[counter][index], 1);
				index++;
			}
			write(1, "\n", 1);
			counter--;
		}
	}
}
