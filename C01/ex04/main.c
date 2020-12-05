/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:27:20 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 04:28:39 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;
	
	a = 8;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("a igual a %d\n", a);
	printf("b igual a %d\n", b);
}
