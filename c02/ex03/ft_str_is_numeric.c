/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:13:51 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/22 16:01:58 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (*str == 0)
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			res = 1;
		}
		else
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}
