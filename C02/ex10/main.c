/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 23:08:56 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	char i_a[15] = "original";
	char i_b[] = "Novo texto";
	unsigned int i_n = 9;
	printf("%u\n", ft_strlcpy(i_a, i_b, i_n));
	printf("%s\n", i_a);
	printf("%s\n", i_b);
}
