/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 14:14:51 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/26 14:27:44 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 20;
// 	b = 25;
// 	printf("a : %d\tb : %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("a : %d\tb : %d\n", a, b);
// 	return (0);
// }
// 