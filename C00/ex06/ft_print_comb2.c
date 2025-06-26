/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:48:23 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/26 18:51:03 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	wres(int i, int j, char *i_digits, char *j_digits)
{
	i_digits[0] = i / 10 + '0';
	i_digits[1] = i % 10 + '0';
	j_digits[0] = j / 10 + '0';
	j_digits[1] = j % 10 + '0';
	write (1, i_digits, 2);
	write (1, " ", 1);
	write (1, j_digits, 2);
	if (i + j != 197)
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;
	char	i_digits[2];
	char	j_digits[2];

	i = 0;
	while (i <= 98)
	{
		j = i +1;
		while ((i <= 98) && (j <= 99))
		{
			wres(i, j, i_digits, j_digits);
			j++;
		}
		i++;
	}
}

// int	main(void){
// 	ft_print_comb2();
// }