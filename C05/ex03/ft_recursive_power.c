/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:26:20 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/10 19:26:20 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 || power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int main()
// {
//     int N = -2;
// 	int power = 9;
//     int fact = ft_recursive_power(N, power);
//     printf("%d power of %d is %d", N, power, fact);
//     return 0;
// }