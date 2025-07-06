/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 19:19:24 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/06 15:40:49 by nachebbi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
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
void	*check_create(char *str, struct s_array, struct s_clues);
void	ft_putstr(char *str);
int		ft_count_int(char *str);
int		main(int argc, char **argv);

