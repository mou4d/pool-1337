/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:51:04 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/30 17:59:16 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*ret;

	ret = NULL;
	if (min >= max)
		return (ret);
	size = max - min;
	ret = (int *)malloc(size * sizeof(int));
	i = -1;
	while (++i < size)
		ret[i] = min++;
	return (ret);
}
