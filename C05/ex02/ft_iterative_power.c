/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 22:58:47 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/07 23:03:55 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	while (power >= 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

#include <stdio.h>
// 
int main()
{
    int N = -2;
	int power = 9;
    int fact = ft_iterative_power(N, power);
    printf("%d power of %d is %d", N, power, fact);
    return 0;
}
// 