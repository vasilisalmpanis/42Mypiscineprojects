/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valmpani <valmpani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:31:11 by valmpani          #+#    #+#             */
/*   Updated: 2022/07/30 09:59:18 by valmpani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	int		i;

	index = 0;
	i = 1;
	ft_lowercase(str);
	while (str[index] != '\0')
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (i == 1)
				str[index] = str[index] - 32;
			i = 0;
		}
		else if (str[index] >= '0' && str[index] <= '9')
			i = 0;
		else
			i = 1;
		index++;
	}
	return (str);
}
