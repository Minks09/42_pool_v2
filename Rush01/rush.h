/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:19:24 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/06 16:07:16 by nachebbi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


typedef struct	s_array
{
	int		x;
	int		y;
	char	*possibilities;
	char	value;
}map;

typedef struct s_clues
{
	int	*north;
	int	*south;
	int	*east;
	int	*west;
}clues;

int		check_input(char *str);
void	ft_putstr(char *str);
int		ft_count_int(char *str);
int		main(int argc, char **argv);
int		ft_simple_atoi(char str);
clues	*check_create(char *str, clues *clues);
// void	init_struct(char *str, s_array map, s_clues clues);

