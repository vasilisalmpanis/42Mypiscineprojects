/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:32:33 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/10 09:36:54 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *src)
{
	int	index;

	index = 0;
	while (src[index])
		index++;
	return (index);
}

char	*ft_copy_str(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dest)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*buffer;

	buffer = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!buffer)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		buffer[i].size = ft_strlen(av[i]);
		buffer[i].str = av[i];
		buffer[i].copy = ft_copy_str(av[i]);
		i++;
	}
	buffer[i] = (struct s_stock_str){0, 0, 0};
	return (buffer);
}

/* #include <stdio.h>
int main(int argc, char** argv)
{
	int index = 0;
	struct s_stock_str *example;

	example = ft_strs_to_tab(argc, argv);
	while (index < argc)
	{
		printf("index %d\n", index);
		printf("str %s$\n", example[index].str);
		printf("copy %s$\n", example[index].copy);
		printf("size %d\n", example[index].size);
		index++;
	}
}
 */
