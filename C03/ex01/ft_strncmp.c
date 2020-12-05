/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 18:36:10 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/28 18:46:33 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i_c;

	i_c = 0;
	while (s1[i_c] != '\0' && s2[i_c] != '\0' && i_c < n)
	{
		if (s1[i_c] != s2[i_c])
			return (s1[i_c] - s2[i_c]);
		i_c++;
	}
	if (i_c != n)
		return (s1[i_c] - s2[i_c]);
	return (0);
}
