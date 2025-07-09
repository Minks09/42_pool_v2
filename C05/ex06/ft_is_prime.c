/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 15:04:24 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/09 15:04:30 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	else
	{
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			else
				i++;
		}
	}
	return (1);
}

// #include <stdio.h>
// int main()
// {
// 	int i = 0;
// 	while(i <= 211){
// 		int fact = ft_is_prime(i);
// 		if (fact != 0)
// 			printf("%d of %d \n", i, fact);
// 		i++;
// 	}
//     return 0;
// }