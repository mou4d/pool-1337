/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 04:07:43 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/18 01:04:23 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alpha;
	int	i;

	i = 0;
	alpha = 97;
	while (i < 26)
	{
		write(1, &alpha, 1);
		alpha++;
		i++;
	}
}
