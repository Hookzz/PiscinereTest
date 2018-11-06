/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <jlarrieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 03:31:13 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/08 23:32:15 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;

	i = nb - 1;
	result = nb;
	if (nb < 0 || nb > 12)
		return (0);
	while (i > 1)
	{
		result = result * i;
		i--;
	}
	if (nb == 0)
		return (1);
	return (result);
}
