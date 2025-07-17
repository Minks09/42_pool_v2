/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:10:30 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/17 22:06:19 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	res;
	int	i;

	i = 2;
	res = nb;
	if (nb <= 2)
		return (2);
	if (nb < 3)
		return (3);
	else
	{
		while (i <= nb)
		{
			if (res % i == 0)
			{
				res++;
				i = 2;
			}
			else
				i++;
		}
		return (res);
	}
}

#include <stdio.h>
#include <limits.h>
int main()
{
	int i = 3;
	int fact = ft_find_next_prime(i);
	printf("next prime of %d is %d \n", i, fact);
	return 0;
}