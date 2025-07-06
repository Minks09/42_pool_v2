/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:30:11 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/06 15:47:48 by nachebbi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <rush.h>

int	ft_count_int(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
			res++;
		i++;
	}
	return (res);
}

int	ft_simple_atoi(char str)
{
	if (str >= '0' && str <= '9')
		return (str - '0');
	else if (str == ' ')
		return (0);
}

void	*check_create(char *str, map *map, clues *clues)
{
	int	i;
	int	value;
	int	clues_index;

	clues->north = malloc(sizeof(int) * 4);
	clues->south = malloc(sizeof(int) * 4);
	clues->east = malloc(sizeof(int) * 4);
	clues->west = malloc(sizeof(int) * 4);
	i = 0;
	value = 0;
	clues_index = 0;
	if (!(clues->north) || !(*clues->south) || !(clues->east) || !(clues->west))
	{
		ft_putstr("Error allocation");
		return ;
	}
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			value = ft_simple_atoi(str[i]);
			if (clues_index < 4)
				clues->north[clues_index] = value;
			else if (clues_index < 8)
				clues->south[clues_index - 4] = value;
			else if (clues_index < 12)
				clues->east[clues_index - 8] = value;
			else if (clues_index < 16)
				clues->west[clues_index - 12] = value;
			clues_index++;
		}
		i++;
	}
	return(*map, *clues);
}

void	init_struct(char *str, s_array map, s_clues clues)
{
	
}

int	check_input(char *str)
{
	while (*str)
	{
		if ((ft_count_int(str) % 4 != 0) || ft_count_int(str) < 16)
		{
			ft_putstr("Error\n");
			return (1);
		}
	}
	return (0);
}
