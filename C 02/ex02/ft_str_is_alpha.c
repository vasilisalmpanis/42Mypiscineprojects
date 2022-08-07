/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:27:07 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/27 12:30:17 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if (!((temp >= 'A' && temp <= 'Z') || (temp >= 'a' && temp <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
