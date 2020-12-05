/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:18:46 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/02 05:31:21 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		abs(int n)
{
	return (n < 0 ? -n : n);
}

int		fstrlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int		check_base(char *base)
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

void	helper(int nbr, char *base, int b)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (abs(nbr / b))
			helper(abs(nbr / b), base, b);
		helper(abs(nbr % b), base, b);
	}
	else if (nbr < b)
		write(1, &base[nbr], 1);
	else
	{
		helper(nbr / b, base, b);
		helper(nbr % b, base, b);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int b;

	b = fstrlen(base);
	if (!base || b < 2 || !check_base(base))
		return ;
	helper(nbr, base, b);
}
