/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 15:33:30 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/07 15:43:22 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int dst_len;
	int src_len;
	int i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (dst_len <= (dst_len + src_len) && n > 0)
	{
		dst[dst_len] = src[i];
		dst_len++;
		src_len--;
		i++;
		n--;
	}
	dst[dst_len] = '\0';
	return (dst);
}
