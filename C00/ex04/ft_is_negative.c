/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racinedelarbre <racinedelarbre@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:08:04 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/24 14:22:33 by racinedelar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_is_negative(int n)
{
	if (n < 0)
		write(1,"N",1);
	else
		write(1,"P",1);
}

int main(void){
	char a = 'a';
	ft_is_negative(-111);
	ft_is_negative(9);
	ft_is_negative(a);
	ft_is_negative(-999999);
}