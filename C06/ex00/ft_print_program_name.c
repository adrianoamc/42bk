/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 22:15:18 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/03 22:22:55 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char const *argv[])
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			++i;
		}
		write(1, "\n", 1);
	}
	return (0);
}
