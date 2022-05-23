/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbousbaa <mbousbaa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 14:25:09 by mbousbaa          #+#    #+#             */
/*   Updated: 2022/05/21 23:24:23 by mbousbaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int j;
	int r;
	int de;
	char hex;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			printf("in\n");
			de = str[i] + '0';
				r = de % 16;
				printf("%d\n", r);
				if (r < 10)
					hex  = r + 48;
				else
					hex= r + 55;
				printf("%c\n", hex);
				de = de / 16;
			

			str[i] = '\\';
		}
		i++;
	}
}

int main ()
{
	char str[] = "This is \n a test";

	ft_putstr_non_printable(str);

	printf("%s\n", str);
	return 0;
}