/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 15:28:05 by racinedelar       #+#    #+#             */
/*   Updated: 2025/06/26 18:11:24 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

// int main(void){
// 	ft_putnbr(-2147483648);
// 	write(1,"\n",1);
// 	ft_putnbr(90989843);
// 	write(1,"\n",1);
// 	ft_putnbr(-23424534);
// 	write(1,"\n",2);
// 	ft_putnbr(-0);
// 	write(1,"\n",2);
// 	ft_putnbr(-19);
// 	write(1,"\n",2);
// 	return(0);}