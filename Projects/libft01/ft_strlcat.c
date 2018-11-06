/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 13:01:51 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/06 18:27:00 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		j;
	int		i;
	size_t	total;

	j = 0;
	i = 0;
	while (*dst)
	{
		j++;
		*dst++;
	}
	while (j < size)
		dst[i + j] = src[j++];
	dst[i + j] = '\0';
	total = (i + j) - 1;
	return (total);
}
