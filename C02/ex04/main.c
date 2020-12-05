/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 04:22:48 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_lowercase("aaaa"));
	printf("%d\n", ft_str_is_lowercase("00\n"));
	printf("%d\n", ft_str_is_lowercase("AAA"));
	return (0);
}
