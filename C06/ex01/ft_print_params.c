/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:36:01 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/10 15:36:01 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac > 1)
	{
		while (av[i])
		{
			while (av[i][j])
				write(1, &av[i][j++], 1);
			if (av[i][j] == '\0')
			{
				j = 0;
				i++;
				write(1, "\n", 1);
			}
		}
	}
	return (0);
}
