/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 13:21:20 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/09 10:42:56 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (*(src + index) != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_find_total_length(char **strs, int sep_l, int size)
{
	int	index;
	int	length;

	length = 0;
	index = 0;
	while (index < size)
	{
		length += ft_strlen(strs[index]);
		length += sep_l;
		index++;
	}
	length -= sep_l;
	return (length);
}

char	*append(char *buffer, int size, char *sep, char **strs)
{
	int		index;
	char	*temp;

	index = 0;
	temp = buffer;
	while (index < size)
	{
		ft_strcpy(temp, strs[index]);
		temp += ft_strlen(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(temp, sep);
			temp += ft_strlen(sep);
		}
		index++;
	}
	*temp = '\0';
	return (buffer);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		u_length;
	char	*buffer;
	char	*b;

	if (size == 0)
	{
		b = (char *)malloc(sizeof(char));
		b[0] = '\0';
		return (b);
	}
	u_length = ft_find_total_length(strs, ft_strlen(sep), size);
	buffer = (char *)malloc(sizeof(char) * (u_length + 1));
	if (!buffer)
		return (0);
	buffer = append(buffer, size, sep, strs);
	return (buffer);
}

/* #include <stdio.h>
int	main(void)
{
	int	index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char**)malloc(5 * sizeof(strs));
	strs[0] = "my";
	strs[1] = "name";
	strs[2] = "is";
	strs[3] = "vasilis";
	strs[4] = "hello";
	separator = "//";
	index = 0;
	while (index < 6)
	{
		result = ft_strjoin(index, strs, separator);
		printf("result with size = %d : %s\n", index, result);
		free(result);
		index++;
	}
}
 */
