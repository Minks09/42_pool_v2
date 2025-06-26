/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:23:46 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/26 18:26:47 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wres(int i, int j, int k, char *comb)
{
	while (j <= 8)
	{
		k = j +1;
		while (k <= 9)
		{
			comb[0] = i + '0';
			comb[1] = j + '0';
			comb[2] = k + '0';
			write(1, comb, 3);
			if (!(i == 7 && j == 8 && k == 9))
				write(1, ", ", 2);
			k++;
		}
		j++;
	}
	i++;
}

void	ft_print_comb(void)
{
	int		i;
	int		j;
	int		k;
	char	comb[3];

	i = 0;
	k = 0;
	while (i <= 7)
	{
		j = i +1;
		wres(i, j, k, comb);
		i++;
	}
}

// int main(void){
// 	ft_print_comb();
// }