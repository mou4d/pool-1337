/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:41:04 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/30 20:31:31 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	size_to_allocate(int size, char **strs, char *sep)
{
	int	i;
	int	strs_total_len;
	int	sep_len;

	sep_len = ft_strlen(sep);
	strs_total_len = 0;
	i = 0;
	while (i < size)
	{
		strs_total_len += ft_strlen(strs[i]);
		printf("str%d length = %d", i, ft_strlen(strs[i]));
		i++;
	}
	sep_len += (size - 1);
	return (strs_total_len + sep_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*ret;

	if (size == 0)
	{
		ret = (char *)malloc(sizeof(char) + 1);
		return (ret);
	}
	j = size_to_allocate(size, strs, sep);
	ret = (char *)malloc(j * sizeof(char) + 1);
	j = -1;
	while (*strs)
	{
		i = -1;
		while ((*strs)[++i])
			ret[++j] = (*strs)[i];
		k = -1;
		strs++;
		if (*strs)
			while (sep[++k])
				ret[++j] = sep[k];
	}
	ret[++j] = '\0';
	return (ret);
}

int main(int c, char **v)
{
	printf("%d\n", size_to_allocate(atoi(v[1]), v, " | "));
	return (0);
}
