/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: racinedelarbre <racinedelarbre@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 11:27:33 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/24 12:55:43 by racinedelar      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	int i = 96;
	
	while(i++ < 122)
		write (1, &i, 1);
}

int main (void)
{
	ft_print_alphabet();
}