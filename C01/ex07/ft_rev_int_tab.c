/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:42:55 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/27 13:47:51 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// int	main(void)
// {
//     int	tab[] = {12, 98, 65, 35, 1000000, -3};
//     int	size = 6;
//     int	i;

//     ft_rev_int_tab(tab, size);
//     for (i = 0; i < size; i++)
//         printf("%d ", tab[i]);
//     printf("\n");
// }