/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 17:56:18 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/29 11:24:23 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
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
		if (temp < ' ' || temp == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
