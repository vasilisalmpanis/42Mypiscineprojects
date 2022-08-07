/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:50:26 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 14:03:18 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	counter;

	if (argc > 1)
	{
		counter = 1;
		while (counter < argc)
		{
			index = 0;
			while (argv[counter][index] != '\0')
			{
				write(1, &argv[counter][index], 1);
				index++;
			}
			write(1, "\n", 1);
			counter++;
		}
	}
}
