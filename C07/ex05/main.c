/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 01:13:19 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/05 01:33:16 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char *str, char *charset);

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		char **sarr = ft_split(av[1], av[2]);
		for (int i = 0; sarr[i]; i++)
			printf("%s\n", sarr[i]);
	}
}
