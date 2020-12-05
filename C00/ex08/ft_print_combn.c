/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 01:23:08 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 00:48:04 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	ft_p(int i_exp, int i_base)
{
	long l_result;

	l_result = 1;
	while (i_base > 0)
	{
		l_result = l_result * i_exp;
		i_base = i_base - 1;
	}
	return (l_result);
}

void	ft_putnbr(int i_num, int i_n_d)
{
	int i_digit;

	while (i_n_d > 0)
	{
		i_digit = i_num % ft_p(10, i_n_d) / ft_p(10, i_n_d - 1) + '0';
		write(1, &i_digit, 1);
		i_n_d--;
	}
}

int		ft_find_min_max(int i_n_digits, int *i_max)
{
	int i_count;
	int i_digit;
	int i_min;

	i_min = 0;
	*i_max = 0;
	i_count = 0;
	i_digit = 9;
	while (i_n_digits)
	{
		i_n_digits--;
		i_min = i_min + i_n_digits * ft_p(10, i_count);
		*i_max = *i_max + (i_digit - i_count) * ft_p(10, i_count);
		i_count++;
	}
	return (i_min);
}

int		ft_print_or_not(int i_num, int n)
{
	int		i_print;
	int		i_d_n;
	int		i_d_n1;
	long	l_pot_10;

	i_print = 1;
	while (n >= 2)
	{
		l_pot_10 = ft_p(10, n);
		i_d_n = (i_num % l_pot_10) / (l_pot_10 / 10);
		i_d_n1 = (i_num % (l_pot_10 / 10)) / (l_pot_10 / 100);
		if (i_d_n >= i_d_n1)
		{
			i_print = 0;
			n = 0;
		}
		n--;
	}
	return (i_print);
}

void	ft_print_combn(int n)
{
	int i_num;
	int i_max;

	if (n >= 1 && n <= 9)
	{
		i_num = ft_find_min_max(n, &i_max);
		while (i_num <= i_max)
		{
			if (ft_print_or_not(i_num, n))
			{
				ft_putnbr(i_num, n);
				if (i_num < i_max)
					write(1, ", ", 2);
			}
			i_num++;
		}
	}
}
