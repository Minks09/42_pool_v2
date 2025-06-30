/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:26:23 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/29 22:34:51 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_first_line(int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		if ((i > 0) && (i < x -1))
			ft_putchar('B');
		else if ((i == x - 1) && i >= 1)
			ft_putchar('C');
		i++;
	}
	ft_putchar('\n');
}

void	ft_mid_line(int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('B');
		if ((i > 0) && (i < x -1))
			ft_putchar(' ');
		else if ((i == x - 1) && i >= 1)
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	ft_last_line(int x)
{
	int		i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar('A');
		if ((i > 0) && (i < x -1))
			ft_putchar('B');
		else if ((i == x - 1) && i >= 1)
			ft_putchar('C');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		hauteur_index;

	hauteur_index = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (hauteur_index <= y)
	{
		if (hauteur_index == 0)
			ft_first_line(x);
		if (hauteur_index < y - 2)
			ft_mid_line(x);
		else if ((hauteur_index == (y - 1)) && (hauteur_index >= 1))
			ft_last_line(x);
		hauteur_index++;
	}
}
