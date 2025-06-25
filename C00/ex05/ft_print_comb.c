/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racinedelarbre <racinedelarbre@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 14:23:46 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/24 14:46:43 by racinedelar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;
	char comb[3];
	
	i = 0;
	while( i <= 7)
	{
		j = i +1;
		while(j <= 8)
		{
			k = j +1;
			while( k <=9)
			{
				comb[0] = i + '0';
				comb[1] = j + '0';
				comb[2] = k + '0';
				write(1, comb, 3);
				
				if (!(i == 7 && j == 8 && k ==9))
					write(1,", ",2);
				k++;
			}
			j++;
		}
		i++;
	}
}

int main(void){
	ft_print_comb();
}