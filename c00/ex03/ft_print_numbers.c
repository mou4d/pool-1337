/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 16:25:34 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/14 16:59:02 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;
	int	num;

	num = 48;
	i = 0;
	while (i < 10)
	{
		write(1, &num, 1);
		i++;
		num++;
	}
}
