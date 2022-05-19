/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:40:50 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/19 01:49:54 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	if (*str == 0)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			res = 1;
		else
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}

/*
int main()
{
	char str[] = "awerty";
	printf("%d", ft_str_is_lowercase(str));
	return 0;
}
*/
