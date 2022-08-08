/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:31:45 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/08 09:40:14 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	index;

	index = 0;
	while (src[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		index;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
	char src[] = "43597234uyegfjkvfguywej7364t8q";

	printf("%s\n", ft_strdup(src));
}
 */
