/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:01:39 by valmpani          #+#    #+#             */
/*   Updated: 2022/08/01 10:28:18 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index1;
	int	index2;

	if (to_find[0] == '\0')
		return (str);
	index1 = 0;
	while (str[index1] != '\0')
	{
		index2 = 0;
		while (str[index1 + index2] == to_find[index2] && str[index1] != '\0')
		{
			if (to_find[index2 + 1] == '\0')
				return (&str[index1]);
			index2++;
		}
		index1++;
	}
	return (0);
}
