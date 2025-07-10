/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:36:17 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/10 15:36:17 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

char	**sort_args(int ac, char **av)
{
	char	*buff;
	int		i;

	i = 1;
	while (i < ac)
	{
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				buff = av[i + 1];
				av[i + 1] = av[i];
				av[i] = buff;
			}
			i++;
		}
		i = 1;
		ac--;
	}
	return (av);
}

int	main(int ac, char **av)
{
	int		i;
	char	**mod;

	mod = sort_args(ac, av);
	i = 1;
	while (mod[i])
	{
		ft_putstr(mod[i]);
		if (i < ac)
			ft_putchar('\n');
		i++;
	}
	return (0);
}
