/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 05:13:54 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 14:05:00 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_str_length_fast(char *c_dest)
{
	unsigned int	i_count;

	i_count = 0;
	while (c_dest[i_count] != '\0')
		i_count++;
	return (i_count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*c_dst;
	char			*c_src_start;
	unsigned int	i_dst_length;
	unsigned int	i_remaing;

	c_dst = dest;
	c_src_start = src;
	i_remaing = size;
	while (i_remaing-- != 0 && *c_dst != '\0')
		c_dst++;
	i_dst_length = c_dst - dest;
	i_remaing = size - i_dst_length;
	if (i_remaing == 0)
		return (i_dst_length + ft_str_length_fast(src));
	while (*src != '\0')
	{
		if (i_remaing > 1)
		{
			*c_dst++ = *src;
			i_remaing--;
		}
		src++;
	}
	*c_dst = '\0';
	return (i_dst_length + (src - c_src_start));
}
