/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:26:23 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/28 18:10:45 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	char	begin;
	char	mid;
	char	last;
	int		i;

	i = 0;
	begin = 40;
	mid = 45;
	last = 41;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(begin);
		if ((i > 0) && (i < x -1))
			ft_putchar(mid);
		else if ((i == x - 1) && i >= 1)
			ft_putchar(last);
		i++;
	}
	ft_putchar('\n');
}

void	ft_mid_line(int x)
{
	char	begin;
	char	mid;
	char	last;
	int		i;

	i = 0;
	begin = 40;//= (
	mid = 32;//= ' '
	last = 41;//= )
	while (i < x)
	{
		if (i == 0)
			ft_putchar(begin);
		if ((i > 0) && (i < x -1))
			ft_putchar(mid);
		else if ((i == x - 1) && i >= 1)
			ft_putchar(last);
		i++;
	}
	ft_putchar('\n');

}

void	ft_last_line(int x)
{
	char	begin;
	char	mid;
	char	last;
	int		i;

	i = 0;
	begin = 40;//= (
	mid = 45;//= '-'
	last = 41;//= )
	while (i < x)
	{
		if (i == 0)
			ft_putchar(begin);
		if ((i > 0) && (i < x -1))
			ft_putchar(mid);
		else if ((i == x - 1) && i >= 1)
			ft_putchar(last);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		hauteur_index;

	hauteur_index = 0;
	while (hauteur_index <= y)
	{
		if (hauteur_index == 0)
			ft_first_line(x);
		if (hauteur_index <= y - 2)
			ft_mid_line(x);
		else if ((hauteur_index == (y - 1)) && (hauteur_index > 1))
			ft_last_line(x);
		hauteur_index++;
	}
}
