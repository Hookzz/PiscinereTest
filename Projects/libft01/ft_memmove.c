/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:00:58 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/07 18:45:22 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *tmp;

	tmp = ft_memalloc(n);
	tmp = ft_memcpy(tmp, src, n);
	dst = ft_memcpy(dst, tmp, n);
	free(tmp);
	return (dst);
}
