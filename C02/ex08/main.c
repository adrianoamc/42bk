/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 05:10:58 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char a[] = "aBaA";

	printf("%s\n", ft_strlowcase(a));
	return (0);
}
