/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:06:23 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/12 14:09:15 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	valid_number(char *str)
{
	int	i;

	i = 0;
	if (!str[0])
		return (1);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

void	wr_error(int i)
{
	if (i == 0)
		write(1, "Error\n", 7);
	else if (i == 1)
		write(1, "Dict Error\n", 12);
	else if (i == 2)
		write(1, "ERROR : WRONG ARGUMENT NUMBER\n USE TWO ARGUMENT AT MOST\n.'//'rush-02 {number}")
}

