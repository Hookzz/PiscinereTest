/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:34:11 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/12 16:17:30 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	while (str[0] != '\0')
	{
		if (!(str[0] >= '0' && str[0] <= '9'))
			return (0);
		str++;
	}
	return (1);
}
