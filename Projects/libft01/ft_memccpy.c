/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:22:10 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/11/06 17:54:03 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	*temp = (unsigned char*)dest;
	while (i < n)
	{
		if (*temp == (unsigned char)c)
			break ;
		*temp = (unsigned char*)src;
		*temp++;
		*src++;
		i++;
	}
	if (*temp == (unsigned char)c)
		return (dest + i);
	else
		return (NULL);
}
