/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 05:25:43 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/03 19:58:47 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int 	main()
{
	ft_putnbr_base(-2147483648, "0123456789"); printf("\n");
	ft_putnbr_base(-2147483648, "01");printf("\n");
	ft_putnbr_base(-2147483648, "0123456789ABCDEF");printf("\n");
	ft_putnbr_base(-2147483648, "01234567");printf("\n");
	ft_putnbr_base(2147483647, "0123456789"); printf("\n");
	ft_putnbr_base(2147483647, "01");printf("\n");
	ft_putnbr_base(2147483647, "0123456789ABCDEF");printf("\n");
	ft_putnbr_base(2147483647, "01234567");
	ft_putnbr_base(2147483647, "0");printf("\n");
	ft_putnbr_base(2147483647, "-0123456789ABCDEF");printf("\n");
	ft_putnbr_base(2147483647, "  0123456789ABCDEF");printf("\n");
}
