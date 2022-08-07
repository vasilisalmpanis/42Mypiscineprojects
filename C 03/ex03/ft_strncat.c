/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:55:11 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/01 13:27:52 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *dest)
{
	int	counter;

	counter = 0;
	while (dest[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	last_letter;

	last_letter = str_len(dest);
	while (*src != '\0' && nb > 0)
	{
		dest[last_letter] = *src;
		src++;
		last_letter++;
		nb--;
	}
	dest[last_letter] = '\0';
	return (dest);
}
