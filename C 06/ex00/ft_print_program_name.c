/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:12:15 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 13:49:40 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;

	if (argc)
	{
		index = 0;
		while (argv[0][index] != '\0')
		{
			write(1, &argv[0][index], 1);
		index++;
		}
		write(1, "\n", 1);
	}
}
