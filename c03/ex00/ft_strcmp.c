/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 17:36:36 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/21 18:16:32 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		res = s1[i] - s2[i];
		if (res != 0)
			break ;
		i++;
	}
	return (res);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%d\n", ft_strcmp(*(argv + 1), *(argv + 2)));
	else
		return (1);
	return (0);
}
*/
