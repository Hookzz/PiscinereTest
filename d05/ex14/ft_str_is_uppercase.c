/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:45:23 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/12 16:18:17 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= 'A' && str[0] <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}