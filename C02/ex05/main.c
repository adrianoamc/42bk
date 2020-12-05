/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 04:22:39 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_uppercase("aaaa"));
	printf("%d\n", ft_str_is_uppercase("00\n"));
	printf("%d\n", ft_str_is_uppercase("AAA"));
	return (0);
}
