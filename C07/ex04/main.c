/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 22:19:55 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/04 22:23:17 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		main(void)
{
	printf("result : $%s$\n", ft_convert_base("2147483647", "0123456789", "0123456789abcdef"));
	printf("result : $%s$\n", ft_convert_base("---------7fffffff", "0123456789abcdef", "01"));
	printf("result : $%s$\n", ft_convert_base("---+--0001023a", "0123456789", "0123456789"));
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", "abcdefghij"));
	printf("result : $%s$\n", ft_convert_base("-0", "-0123456789", "abcdefghij"));
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", "-abcdefghij"));
	printf("result : $%s$\n", ft_convert_base("-0", " 0123456789", "abcdefghij"));
	printf("result : $%s$\n", ft_convert_base("-0", "0123456789", " abcdefghij"));
	printf("result : $%s$\n", ft_convert_base("-0", "-0123456789", "0"));
	printf("result : $%s$\n", ft_convert_base("-0", "0", "-abcdefghij"));
	return (0);
}