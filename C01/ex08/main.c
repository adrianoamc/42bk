/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 04:53:25 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/27 04:10:41 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int		main(void)
{
	int arr[10];
	int i;

	arr[0] = 10;
	arr[1] = 7;
	arr[2] = 8;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 15;
	arr[6] = 5;
	ft_sort_int_tab(arr, 7);
	i = 0;
	while (i < 7)
	{
		printf("%d ", arr[i]);
		i++;
	}
}
