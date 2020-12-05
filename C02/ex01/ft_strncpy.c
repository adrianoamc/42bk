/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:52:15 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 02:53:46 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *c_p;

	c_p = dest;
	while (n)
	{
		if (*src != '\0')
			*dest++ = *src++;
		else
			*dest++ = '\0';
		n--;
	}
	return (c_p);
}
