/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 02:17:44 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/22 15:14:54 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		k;
	char	*ptr;

	i = 0;
	while (to_find[i] != 0)
		i++;
	j = 0;
	k = 0;
	while (str[j] != '\0')
	{
		if (str[j] == to_find[k])
			k++;
		else
			k = 0;
		if (k == i)
		{
			ptr = &str[j - (i - 1)];
			return (ptr);
			break ;
		}
		j++;
	}
	return (0);
}

int main()
{
	char str[] = "This is a long long long long string";
	char s[] = "xxx";
	printf("%s", ft_strstr(str, s));
	return 0;
}
