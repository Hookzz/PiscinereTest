/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 13:33:39 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/13 15:04:35 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int dest_len;
	int src_len;
	int i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	while (dest_len <= (dest_len + src_len) && n > 0)
	{
		dest[dest_len] = src[i];
		dest_len++;
		src_len--;
		i++;
		n--;
	}
	dest[dest_len] = '\0';
	return (dest);
}
