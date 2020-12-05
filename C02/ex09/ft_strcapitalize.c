/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 05:14:04 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/01 05:30:00 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_alph_n(char c)
{
	return ((c >= '0' && c <= '9') ||
			(c >= 'A' && c <= 'Z') ||
			(c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int i_c;

	i_c = 0;
	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] += 'A' - 'a';
		++i_c;
	}
	while (str[i_c] != '\0')
	{
		if ((!ft_alph_n(str[i_c - 1]) && (str[i_c] >= 'a' && str[i_c] <= 'z')))
			str[i_c] += +'A' - 'a';
		else if (str[i_c] >= 'A' && str[i_c] <= 'Z')
			str[i_c] += -'A' + 'a';
		++i_c;
	}
	return (str);
}
