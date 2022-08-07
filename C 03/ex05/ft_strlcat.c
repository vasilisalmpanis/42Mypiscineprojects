/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:31:00 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/01 16:53:40 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index1;
	unsigned int	index2;
	unsigned int	remaining;

	index1 = 0;
	index2 = 0;
	while (dest[index2] != '\0')
		index2++;
	remaining = size - index2;
	if (remaining <= 0 || size == 0)
		return (size + ft_strlen(src));
	while (src[index1] != '\0' && remaining - 1 > 0)
	{
		dest[index2] = src[index1];
		index1++;
		index2++;
	}
	dest[index2] = '\0';
	return (index2);
}
