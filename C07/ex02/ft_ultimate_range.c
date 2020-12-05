/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 07:06:53 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/04 07:23:34 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*nums;
	int		ret;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	nums = (int *)malloc(sizeof(int) * (max - min));
	if (!nums)
		return (-1);
	*range = nums;
	ret = max - min;
	while (min < max)
		*nums++ = min++;
	return (ret > -1 ? ret : -1);
}
