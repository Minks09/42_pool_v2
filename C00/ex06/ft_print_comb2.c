/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racinedelarbre <racinedelarbre@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:48:23 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/24 15:27:16 by racinedelar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_print_comb2(void)
{
	//int count = 0;
	int i = 0;
	char i_digits[2];
	char j_digits[2];
	
	while( i <= 98)
	{
		int j = i +1;
		while( j <= 99)
		{
			i_digits[0] = i / 10 + '0';
			i_digits[1] = i % 10 + '0';
			j_digits[0] = j / 10 + '0';
			j_digits[1] = j % 10 + '0';
			write (1, i_digits, 2);
			write (1," ", 1);
			write (1, j_digits, 2);
			//count++;
			if (i == 98 && j == 99)
				break;
			write (1, ", ", 2);
			j++;
		}
		i++;
	}
	//printf("\n%d", count);
	
}
 int main(void){
	ft_print_comb2();
 }