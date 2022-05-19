/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:37:54 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/19 15:27:34 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		ft_strupcase(&str[i]);
	}
	return(str);
}

int main()
{
	char str[] = "abcd";
	;

	printf("%s", ft_strcapitalize(str));

	return 0;
}