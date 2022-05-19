/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:16:23 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/18 14:44:16 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sorted;

	sorted = 0;
	while (sorted == 0)
	{
		i = 0;
		while (i < size - 1)
		{
			j = i + 1;
			sorted = 0;
			while (j < size)
			{
				if (tab[i] > tab[j])
					ft_swap (&tab[i], &tab[j]);
				else
					sorted = 1;
				j++;
			}
			i++;
		}
	}
}
