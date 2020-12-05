/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 04:52:22 by aakissue          #+#    #+#             */
/*   Updated: 2020/11/26 05:08:43 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i_counter;

	i_counter = 0;
	while (str[i_counter] != '\0')
		i_counter++;
	return (i_counter);
}
