/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 09:20:36 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/01 09:54:01 by valmpani         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	last_letter;

	last_letter = str_len(dest);
	while (*src != '\0')
	{
		dest[last_letter] = *src;
		src++;
		last_letter++;
	}
	dest[last_letter] = '\0';
	return (dest);
}
