/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 04:23:17 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		is_alpha(char c_a);
int		ft_strlen(char *str);
int		ft_str_is_alpha(char *str);

int		main(void)
{
	printf("%d\n", ft_str_is_alpha("Adriano"));
	printf("%d\n", ft_str_is_alpha("000adriano"));
	printf("%d\n", ft_str_is_alpha(""));
	return (0);
}
