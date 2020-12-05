/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 03:04:43 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 03:27:05 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c_a)
{
	return (c_a >= 'A' && c_a <= 'Z') || (c_a >= 'a' && c_a <= 'z');
}

int		ft_strlen(char *str)
{
	int i_c;

	i_c = 0;
	while (str[i_c])
		i_c++;
	return (i_c);
}

int		ft_str_is_alpha(char *str)
{
	int i_l;
	int i_c;

	i_c = 0;
	i_l = ft_strlen(str);
	while (is_alpha(str[i_c]))
		i_c++;
	return (i_l == i_c ? 1 : 0);
}
