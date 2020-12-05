/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakissue <aakissue@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 01:12:49 by aakissue          #+#    #+#             */
/*   Updated: 2020/12/05 01:58:31 by aakissue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_sep(char c, char *charset)
{
	int j;

	j = 0;
	while (charset[j])
	{
		if (c == charset[j])
			return (1);
		j++;
	}
	return (0);
}

char	*strsub(char *s, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

int		ft_sepcount(char *str, char *charset)
{
	int i;
	int n;

	n = 1;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset))
			n++;
		i++;
	}
	return (n);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		n;
	int		idx;
	int		start;

	n = ft_sepcount(str, charset);
	res = malloc((n + 1) * sizeof(char *));
	start = 0;
	idx = 0;
	i = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset) && i > 0 && is_sep(str[i - 1], charset))
			start = i;
		if (is_sep(str[i], charset) && i > 0 && !is_sep(str[i - 1], charset))
			res[idx++] = strsub(str + start, i - start);
		else if (!str[i + 1] && !is_sep(str[i], charset))
			res[idx++] = strsub(str + start, i - start + 1);
		i++;
	}
	res[idx] = 0;
	return (res);
}
