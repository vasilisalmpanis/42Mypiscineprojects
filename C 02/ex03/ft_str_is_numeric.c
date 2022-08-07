/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 12:30:09 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/27 12:49:52 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if (!(temp >= '0' && temp <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
