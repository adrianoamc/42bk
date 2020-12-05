/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 05:14:21 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 06:31:11 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int tab[10];
	int i;
	int i_size;
	
	i_size = 10;
	i = i_size;
	while (i--)
	{
		tab[i] = i;
		printf("%d\n", tab[i]);
	}
	ft_rev_int_tab(tab, 10);
	i = i_size;
	while (i--)
	{
		printf("%d\n", tab[i]);
	}
}
