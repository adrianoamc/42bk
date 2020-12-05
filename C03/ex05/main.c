/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:52:22 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 15:31:30 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_str_length_fast(char *dest);

int main()
{
	char a[10] = "Ola ";
	char b[] = "amigos";
	
	unsigned int i = 7;
	printf("%u\n", ft_strlcat(a, b, i));
	printf("%s\n", a);
	printf("%s\n", b);
}
