/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 03:13:09 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/27 04:09:20 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i_counter1;
	int i_counter2;
	int i_tmp;

	i_counter1 = 0;
	while (i_counter1 < size - 1)
	{
		i_counter2 = 0;
		while (i_counter2 < size - 1)
		{
			if (tab[i_counter2] > tab[i_counter2 + 1])
			{
				i_tmp = tab[i_counter2];
				tab[i_counter2] = tab[i_counter2 + 1];
				tab[i_counter2 + 1] = i_tmp;
			}
			i_counter2++;
		}
		i_counter1++;
	}
}
