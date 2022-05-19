/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 01:56:56 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/19 02:06:47 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	res;

	if (*str == 0)
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
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
	str[0] = 27;
	printf("%d", ft_str_is_printable(str));
	return 0;
}
*/
