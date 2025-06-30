/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:28:41 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/29 16:19:37 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
//     int a = 20;
//     int b = 6;
//     int div;
//     int mod;

//     ft_div_mod(a, b, &div, &mod);
//     printf("a = %d, b = %d\n", a, b);
//     printf("Division : %d\nModulo : %d\n", div, mod);
//     return 0;
// }