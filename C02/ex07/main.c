/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 05:05:54 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char a[] = "aBaa";

	printf("%s\n", ft_strupcase(a));
	return (0);
}
