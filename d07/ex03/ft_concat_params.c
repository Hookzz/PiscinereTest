/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlarrieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 19:46:41 by jlarrieu          #+#    #+#             */
/*   Updated: 2018/08/17 12:47:31 by jlarrieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(char **av)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*tab;

	i = 0;
	k = 0;
	if (!(tab = malloc(sizeof(char*) * (ft_len(argv) + 1))))
		return (0);
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			tab[k] = argv[i][j];
			k++;
			j++;
		}
		tab[k] = '\n';
		k++;
	}
	tab[k - 1] = '\0';
	return (tab);
}
