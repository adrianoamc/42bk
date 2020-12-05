/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 02:32:50 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 00:37:31 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

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

int		ft_number_digits(int i_num)
{
	int i_num_digits;

	i_num_digits = 1;
	while ((i_num % ft_p(10, i_num_digits)) != i_num)
		i_num_digits++;
	return (i_num_digits);
}

int		ft_abs(int i_num)
{
	if (i_num < 0)
		return (-i_num);
	else
		return (i_num);
}

void	ft_putnbr(int nb)
{
	int i_n_d;
	int i_abs_nb;
	int i_digit;

	if (nb >= -2147483648 && nb <= 2147483647)
	{
		ft_putchar('\"');
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			if (nb < 0)
				ft_putchar('-');
			i_abs_nb = ft_abs(nb);
			i_n_d = ft_number_digits(i_abs_nb);
			while (i_n_d > 0)
			{
				i_digit = i_abs_nb % ft_p(10, i_n_d) / ft_p(10, i_n_d - 1);
				i_digit = i_digit + '0';
				ft_putchar(i_digit);
				i_n_d--;
			}
		}
		ft_putchar('\"');
	}
}
