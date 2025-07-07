/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 07/07/2025 22:47:35 by nachebbi          #+#    #+#             */
/*   Updated: 07/07/2025 22:52:21 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int main()
// {
//     int N = 5;
//     int fact = ft_recursive_factorial(N);
//     printf("Factorial of %d is %d", N, fact);
//     return 0;
// }
