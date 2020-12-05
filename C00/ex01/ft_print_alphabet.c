/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 23:12:29 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/25 23:22:47 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char c_character;

	c_character = 'a';
	while (c_character <= 'z')
	{
		write(1, &c_character, 1);
		c_character++;
	}
}
