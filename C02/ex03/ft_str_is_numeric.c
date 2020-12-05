/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 03:30:58 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 03:46:17 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num(char c_n)
{
	return (c_n >= '0' && c_n <= '9');
}

int		ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!is_num(*str))
			return (0);
		str++;
	}
	return (1);
}
