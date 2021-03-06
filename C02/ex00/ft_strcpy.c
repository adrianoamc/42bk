/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:16:20 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 02:17:59 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char *c_p;

	c_p = dest;
	while (*src != '\0')
		*dest++ = *src++;
	*dest = *src;
	return (c_p);
}
