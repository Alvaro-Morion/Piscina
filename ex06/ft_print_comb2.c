/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 14:29:24 by amorion-          #+#    #+#             */
/*   Updated: 2021/06/27 15:11:37 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_numbers (int x, int y)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = x / 10 + 48;
	b = x % 10 + 48;
	c = y / 10 + 48;
	d = y % 10 + 48;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 2);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_combin2 (void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			print_numbers(i, j);
			if (i != 98 | j != 99)
			{
				write(1, ", ", 2);
			}
			else
			{
				write(1, "\n", 1);
			}
			j++;
		}
		i++;
	}
}
