/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 01:36:48 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/04 01:38:57 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char const *argv[])
{
	int i;
	int j;

	if (argc > 1)
	{
		i = argc - 1;
		while (i >= 1)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				++j;
			}
			write(1, "\n", 1);
			--i;
		}
	}
	return (0);
}
