/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racinedelarbre <racinedelarbre@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:26:23 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/28 15:40:09 by racinedelar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.c"


void	rush(int x, int y)
{
	int	longueur_index;
	int	hauteur_index;
	char	begin;
	char	mid;
	char	last;

	longueur_index = 0;
	hauteur_index = 0;

	while(hauteur_index < y)
	{
		while(longueur_index < x)
		{
			if (longueur_index == 0)
				ft_putchar(begin);
			else if(longueur_index < x - 1)
				ft_putchar(mid);
			else (longueur_index == x)
				ft_putchar(last);
			longueur_index++;
		}
		if (hauteur_index 
		ft_putchar('\n');
		
	}
}
