/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 22:07:17 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/25 23:03:33 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int i_num)
{
	int		i_d1;
	int		i_d2;

	i_d1 = i_num / 10 + '0';
	i_d2 = i_num % 10 + '0';
	write(1, &i_d1, 1);
	write(1, &i_d2, 1);
}

void	ft_print_comb2(void)
{
	int		i_num1;
	int		i_num2;

	i_num1 = 0;
	while (i_num1 <= 98)
	{
		i_num2 = i_num1 + 1;
		while (i_num2 <= 99)
		{
			ft_print_number(i_num1);
			write(1, " ", 1);
			ft_print_number(i_num2);
			if (!(i_num1 == 98 && i_num2 == 99))
				write(1, ", ", 2);
			i_num2++;
		}
		i_num1++;
	}
}
