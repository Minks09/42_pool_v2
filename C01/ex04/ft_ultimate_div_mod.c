/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:03:19 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/26 15:20:06 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}

int	main(void)
{
	int	a;
	int	b;

	a = 27;
	b = 4;
	printf("Avant : a = %d (dividende), b = %d(diviseur)\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Après : a = %d (division), b = %d (modulo)\n", a, b);
	return (0);
}
