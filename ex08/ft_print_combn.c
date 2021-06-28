/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorion- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 17:50:23 by amorion-          #+#    #+#             */
/*   Updated: 2021/06/28 10:11:51 by amorion-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_case_1(void)
{
	int	i;

	i = 47;
	while (++i < 57)
	{
		ft_putchar(i);
		write(1, ", ", 2);
	}
	ft_putchar(57);
}

void	ft_print_nums(int *arr, int n)
{
	int	i;
	int	c;

	i = 1;
	c = 1;
	while (i < n)
	{
		if (arr[i - 1] >= arr[i])
		{
			c = 0;
		}
		i++;
	}
	if (c != 0)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(arr[i++] + '0');
		}
		if (arr[0] < (10 - n))
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_combn(int	n)
{	
	int	i;
	int	nums[9];

	i = 0;
	if (n == 1)
		ft_case_1();
	while (i < n)
	{
		nums[i++] = 0;
	}
	while (nums[0] <= (10 - n) && n > 1)
	{
		ft_print_nums(nums, n);
		nums[n - 1]++;
		i = n;
		while (i != 0 && n > 1)
		{
			i--;
			if (nums[i] > 9)
			{
				nums[i - 1]++;
				nums[i] = 0;
			}
		}
	}
}
