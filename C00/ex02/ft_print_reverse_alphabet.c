/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:29:47 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 00:53:12 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char c_character;

	c_character = 'z';
	while (c_character <= 'a')
	{
		write(1, &c_character, 1);
		c_character--;
	}
}
