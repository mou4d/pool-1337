/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 04:30:16 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/25 23:36:02 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write(1, &str[i], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*v;

	v = *a;
	*a = *b;
	*b = v;
}

int	main(int argc, char **argv)
{
	int		i;
	int		not_equal;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			not_equal = ft_strcmp(argv[i], argv[i + 1]);
			if (not_equal > 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				i = 0;
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
