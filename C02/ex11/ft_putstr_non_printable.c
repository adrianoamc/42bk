/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 05:42:29 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 05:57:42 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char c)
{
	if (c < 16)
		ft_putchar(c < 10 ? c + '0' : c - 10 + 'a');
	else
	{
		ft_print(c / 16);
		ft_print(c % 16);
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	c;
	int		i_c;

	i_c = 0;
	c = str[i_c];
	while (c)
	{
		if (c > 31 && c < 127)
			write(1, &c, 1);
		else
		{
			write(1, "\\0", 2);
			ft_print(c);
		}
		i_c++;
		c = str[i_c];
	}
}
