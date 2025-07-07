/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 23:04:58 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/07 23:07:32 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

int main()
{
    int N = -2;
	int power = 9;
    int fact = ft_recursive_power(N, power);
    printf("%d power of %d is %d", N, power, fact);
    return 0;
}