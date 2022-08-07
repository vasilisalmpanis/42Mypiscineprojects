/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:50:35 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/27 12:53:16 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int		index;
	int		i;
	char	temp;

	i = 0;
	index = 0;
	while (*(str + index) != '\0')
	{
		index++;
	}
	while (i < index)
	{
		temp = str[i];
		if (!(temp >= 'a' && temp <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
