/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:33:18 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/18 15:10:23 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	holder;

	i = 0;
	while (i < size / 2)
	{
		holder = tab[i];
		tab[i] = tab[size - (i + 1)];
		tab[size - (i + 1)] = holder;
		i++;
	}
}
