/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:33:13 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/03 02:33:17 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	fstrlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	i = 0;
	while (i < base[i + 1])
	{
		j = i + 1;
		while (j < base[j])
		{
			if (base[i] >= base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_input(char *str, char *base)
{
	int i;
	int ok;
	int j;

	i = 0;
	while (str[i])
	{
		ok = 0;
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				ok = 1;
			j++;
		}
		if (!ok)
			return (0);
		i++;
	}
	return (1);
}

int	end_function(char *str, char *base, int b, int i)
{
	int sum;
	int j;

	sum = 0;
	while (str[i])
	{
		sum *= b;
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
				break ;
			j++;
		}
		sum += j;
		i++;
	}
	return (sum);
}

int	ft_atoi_base(char *str, char *base)
{
	int b;
	int neg;
	int i;

	b = fstrlen(base);
	if (!str || !base || b < 2 || !check_base(base))
		return (0);
	i = 0;
	neg = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	if (!check_input(str + i, base))
		return (0);
	return (end_function(str, base, b, i) * neg);
}
