/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:28:24 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/09 11:06:01 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		words_len(const char *str, char c)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i])
	{
		i++;
		j++;
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	if (!s || !(tab = (char**)malloc(sizeof(char*) * words_len(s, c) + 1)))
		return (0);
	i = 0;
	j = 0;
	while (i < words_len(s, c))
	{
		k = 0;
		if (!(tab[i] = ft_strnew(words_len(&s[i], c + 1))))
			tab[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
