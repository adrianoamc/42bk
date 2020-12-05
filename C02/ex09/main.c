/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 02:25:41 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 23:07:03 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_alph_n(char c);
char	*ft_strcapitalize(char *str);

int		main(void)
{
	char s[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(s);
	printf("%s\n", s);
}
