/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 01:27:20 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 02:25:49 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main(void)
{
	int *********nbr9;
	int ********nbr8;
	int *******nbr7;
	int ******nbr6;
	int	*****nbr5;
	int	****nbr4;
	int	***nbr3;
	int	**nbr2;
	int	*nbr1;
	int nbr;

	nbr1 = &nbr;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr9 = &nbr8;
	
	ft_ultimate_ft((nbr9));
	printf("%d", *********nbr9);
}