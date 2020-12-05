/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:52:22 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 04:15:34 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char a[34] = "teste primeiro";
	char b[] = " e depois isso";
	
	//printf("%s\n",strcat(a,b));
	printf("%s\n",ft_strcat(a,b));
	return (0);
}
