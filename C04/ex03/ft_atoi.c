/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:07:12 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/02 05:16:27 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int value;
	int sign;

	value = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\t' || *str == '\r' ||
		*str == '\v' || *str == '\f')
	{
		++str;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign++;
		str++;
	}
	while ((*str) >= '0' && (*str) <= '9')
	{
		value *= 10;
		value = (sign % 2 ? value + (*str - '0') : value - (*str - '0'));
		str++;
	}
	return (value);
}
