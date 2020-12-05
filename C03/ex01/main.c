/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 17:52:22 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/29 15:14:05 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	c_a[100];
	char	c_b[100];
	int		i_n_c;

	strcpy(c_a, "AAMC010128");
	strcpy(c_b, "AAMC01012");
	i_n_c = 10;
	printf("Resultado %i\n", ft_strncmp(c_a, c_b, i_n_c));
	printf("Contraprova %i\n", strncmp(c_a, c_b, i_n_c));
}
