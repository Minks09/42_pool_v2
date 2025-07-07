/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 14:22:14 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/04 14:22:28 by nachebbi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

// #include <stdio.h>

// int main() {
//     int N = 12;
//     int fact = ft_iterative_factorial(N);
//     printf("Factorial of %d is %d", N, fact);
//     return 0;
// }