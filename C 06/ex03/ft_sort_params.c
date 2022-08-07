/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:13:08 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/04 15:59:30 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		write(1, &str[index], 1);
		index++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	sc;
	int	i;

	sc = 1;
	while (sc != 0)
	{
		sc = 0;
		i = 1;
		while (i < (size - 1))
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
				sc++;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	index;

	if (argc > 2)
		ft_sort_int_tab(argv, argc);
	index = 1;
	while (index < argc)
	{
		ft_putstr(argv[index]);
		ft_putstr("\n");
		index++;
	}
}
