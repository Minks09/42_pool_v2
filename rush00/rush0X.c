/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:26:23 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/28 16:11:47 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_first_line(int i);
{
	char	begin;
	char	mid;
	char	last;

	begin = 40;
	mid = 32;
	last = 41;
}

void	rush(int x, int y)
{
	int		longueur_index;
	int		hauteur_index;

	longueur_index = 0;
	hauteur_index = 0;
	begin = 40;
	mid = 32;
	last = 41;
	while (hauteur_index < y)
	{
		if (hauteur_index == 0)
			ft_first_line(x);
		while (longueur_index <= x)
		{
			if (longueur_index == 0)
				ft_putchar(begin);
			if ((1 <= longueur_index) && (longueur_index <= x - 2))
				ft_putchar(mid);
			if (longueur_index == (x - 1))
				ft_putchar(last);
			longueur_index++;
		}
		ft_putchar('\n');
		longueur_index = 0;
		hauteur_index++;
	}
}
