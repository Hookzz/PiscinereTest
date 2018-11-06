/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 09:45:31 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/06 10:48:25 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int		a;
	char	u;
	char	d;

	a = 0;
	while (++a < 10000)
	{
		u = a / 100;
		d = a % 100;
		if (u < d)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + u / 10);
			ft_putchar(48 + u % 10);
			ft_putchar(' ');
			ft_putchar(48 + d / 10);
			ft_putchar(48 + d % 10);
		}
	}
}
