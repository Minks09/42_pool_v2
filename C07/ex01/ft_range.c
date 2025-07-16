/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 17:14:26 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/14 17:20:29 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*res;

	if (min >= max)
	{
		res = NULL;
		return (res);
	}
	res = malloc(sizeof (int) * (max - min));
	if (!(res))
		return (NULL);
	while (max >= min)
	{
		res[max - min - 1] = max - 1;
		max--;
	}
	return (res);
}
