/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 04:27:37 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 04:34:47 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*c_ptr1;
	char			*c_ptr2;
	unsigned int	i_c;

	c_ptr1 = dest;
	while (*c_ptr1)
		c_ptr1++;
	c_ptr2 = src;
	i_c = 0;
	while (*c_ptr2 && i_c < nb)
	{
		*c_ptr1 = *c_ptr2;
		c_ptr2++;
		c_ptr1++;
		i_c++;
	}
	*c_ptr1 = '\0';
	return (dest);
}
