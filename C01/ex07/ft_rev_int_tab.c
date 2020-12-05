/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 05:13:44 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 06:31:11 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i_size;
	int i_temp;

	i_size = size;
	while (size-- > (i_size / 2))
	{
		i_temp = tab[size];
		tab[size] = tab[i_size - size - 1];
		tab[i_size - size - 1] = i_temp;
	}
}
