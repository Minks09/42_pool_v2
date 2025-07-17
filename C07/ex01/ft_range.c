/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:06:50 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/17 14:18:52 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	res = NULL;
	if (min >= max)
		return (res);
	res = malloc(sizeof (int) * (max - min));
	if (!(res))
		return (res);
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
