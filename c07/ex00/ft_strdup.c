/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 22:35:53 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/30 17:59:13 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*ret;

	i = 0;
	while (src[i])
		i++;
	ret = (char *)malloc(i * sizeof(char) + 1);
	i = 0;
	while (src[i])
	{
		ret[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		ret[i] = '\0';
	return (ret);
}
