/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 04:22:52 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		is_num(char c_n);
int		ft_str_is_numeric(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_numeric("000000"));
	printf("%d\n", ft_str_is_numeric("000adriano"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
