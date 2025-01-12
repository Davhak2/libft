/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davihako <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:42:14 by davihako          #+#    #+#             */
/*   Updated: 2025/01/12 16:24:17 by davihako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(const char *str, char c)
{
	size_t	i = 0;
	size_t	j = 0;
	size_t	k = 0;
	size_t	wc;

	wc = word_count(str, c);
	char	**out = (char **)malloc(sizeof(char *) * (wc + 1));

	if (!out)
		return (NULL);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		j = i;
		while (str[i] && str[i] != c)
			i++;
		if (i > j)
		{
			out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
			if (!out[k])
				return (NULL);
			ft_strlcpy(out[k++], &str[j], i - j);
		}
	}
	out[k] = NULL;
	return (out);
}
