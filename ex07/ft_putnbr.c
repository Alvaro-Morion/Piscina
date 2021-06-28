/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:13:34 by amorion-          #+#    #+#             */
/*   Updated: 2021/06/27 17:38:38 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int	max_pow_10 (int x)
{
	int	z;

	z = 1;
	while (x / z != 0)
	{
		z = z * 10;
	}
	return (z / 10);
}

void	ft_putnbr (int x)
{
	int		p;
	char	n;

	if (x < 0)
	{
		write(1, "-", 1);
		x = (-1) * x;
	}
	p = max_pow_10(x);
	while (p > 1)
	{
		n = x / p + 48;
		write(1, &n, 1);
		x = x % p;
		p = p / 10;
	}
	n = x + 48;
	write(1, &n, 1);
}
