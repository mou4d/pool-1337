/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:51:09 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/19 01:53:32 by mbousbaa         ###   ########.fr       */
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char str[] = "THISISATEST";
	printf("%d", ft_str_is_lowercase(str));
	return 0;
}
*/
