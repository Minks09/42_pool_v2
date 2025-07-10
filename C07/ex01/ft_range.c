/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:24:40 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/10 16:24:40 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*res;
	int	i;

	i = 0;
	range = max - min;
	if (range <= 0)
		return (NULL);
	else
	{
		res = malloc(sizeof (int) * range);
		while (i++ < max)
			res[i] = min + i;
	}
	return (res);
}
