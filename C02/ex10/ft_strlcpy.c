/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 05:31:49 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 05:39:39 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i_c1;
	int i_c2;
	int i_size_backup;

	i_c1 = 0;
	i_c2 = 0;
	i_size_backup = size;
	while (size > 1 && (dest[i_c1] = src[i_c1]) != 0)
	{
		dest[i_c1] = src[i_c1];
		--size;
		i_c1++;
	}
	if (i_size_backup != 0)
	{
		dest[i_c1] = '\0';
		while (src[i_c2])
			i_c2++;
	}
	return (i_c2);
}
