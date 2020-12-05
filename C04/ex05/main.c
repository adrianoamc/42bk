/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:42:10 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/03 02:13:48 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int	main(void)
{
	printf("%d\n", ft_atoi_base("-2147483648", "0123456789"));
	printf("%d\n", ft_atoi_base("-20000000000", "01234567"));
	printf("%d\n", ft_atoi_base("-80000000", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("%d\n", ft_atoi_base("2147483647", "0123456789"));
	printf("%d\n", ft_atoi_base("20000000000", "01234567"));
	printf("%d\n", ft_atoi_base("80000000", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("10000000000000000000000000000000", "01"));
	printf("%d\n", ft_atoi_base("1000000", "1"));
	printf("%d\n", ft_atoi_base("100000000000", "11"));
	printf("%d\n", ft_atoi_base("10000000000000", " 11"));
	printf("%d\n", ft_atoi_base("10000000000000000", "+11"));
	printf("%d\n", ft_atoi_base("10000000000000000", "\r11"));
}