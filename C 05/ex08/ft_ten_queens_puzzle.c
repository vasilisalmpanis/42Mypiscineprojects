/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:43:50 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/03 20:53:41 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ten_queens_puzzle(void)
{
	int		first_row;
	int		total;
	int		tab[4][4];
	char	places[11];

	total = 0;
	first_row = 0;
	while (first_row < 10)
	{
		if (solve_queens(first_row, places) == 1)
		{
			print_answers(places);
			total++;
		}
	}
	return (total);
}
