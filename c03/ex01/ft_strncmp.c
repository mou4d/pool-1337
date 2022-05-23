/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:00:28 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/21 19:20:36 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	while (i < n && s1[i] != '\0')
	{
		res = s1[i] - s2[i];
		if (res != 0)
			break ;
		i++;
	}
	return (res);
}
/*
int main()
{
	char s1[] = "this is s1";
	char s2[] = "this is an other string";

	printf("%d\n", ft_strncmp(s1, s2, 9));
	return 0;
}
*/