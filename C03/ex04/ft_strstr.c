/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 04:42:20 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 15:28:27 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	char *c_haystack;
	char *c_needle;

	if (*to_find == '\0')
		return (str);
	c_haystack = str;
	c_needle = to_find;
	while (1)
	{
		if (*c_needle == '\0')
			return (c_haystack - (c_needle - to_find));
		if (*c_haystack == *c_needle)
			c_needle++;
		else
			c_needle = to_find;	
		if (*c_haystack == '\0')
			break ;
		c_haystack++;
	}
	return (NULL);
}
