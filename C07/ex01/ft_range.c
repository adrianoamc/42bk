/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 06:37:29 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/05 02:58:26 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*nums;
	int		*p;

	if (min >= max)
		return (NULL);
	nums = (int *)malloc(sizeof(int) * (max - min));
	if (!nums)
		return (0);
	p = nums;
	while (min < max)
		*nums++ = min++;
	return (p);
}
