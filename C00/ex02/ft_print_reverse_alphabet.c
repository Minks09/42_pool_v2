/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 12:56:49 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/26 17:28:52 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 123;
	while (i-- > 97)
		write (1, &i, 1);
}

// int main (void)
// {
// 	ft_print_reverse_alphabet();
// }