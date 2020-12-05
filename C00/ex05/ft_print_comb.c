/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:18:01 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/25 22:52:17 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i_num;
	int	i_d1;
	int	i_d2;
	int	i_d3;

	i_num = 12;
	while (i_num <= 789)
	{
		i_d1 = i_num / 100;
		i_d2 = i_num % 100 / 10;
		i_d3 = i_num % 10;
		if (i_d1 < i_d2 && i_d2 < i_d3)
		{
			i_d1 = i_d1 + '0';
			i_d2 = i_d2 + '0';
			i_d3 = i_d3 + '0';
			write(1, &i_d1, 1);
			write(1, &i_d2, 1);
			write(1, &i_d3, 1);
			if (i_num < 789)
				write(1, ", ", 2);
		}
		i_num++;
	}
}
