/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 11:02:33 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/15 11:03:27 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_res(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_res (a / 10 + '0');
			print_res (a % 10 + '0');
			print_res (' ');
			print_res (b / 10 + '0');
			print_res (b % 10 + '0');
			if (a != 98 || b != 99)
			{
				print_res (',');
				print_res (' ');
			}
			b++;
		}
		a++;
	}
}
