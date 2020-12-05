/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:52:22 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 14:29:37 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int 	main(void)
{
	char a[34] = "";
	char b[] = "segunda string";
	printf("%s\n", strncat(a,b,3));
	char d[34] = "primeira string";
	char e[] = "segunda string";
	printf("%s\n", strncat(d,e,10));

	char a1[34] = "";
	char b1[] = "segunda string";
	printf("%s\n",ft_strncat(a1,b1,3));
	char d1[34] = "primeira string";
	char e1[] = "segunda string";
	printf("%s\n",ft_strncat(d1,e1,10));

	return (0);
}
