/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 13:48:49 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/27 14:24:05 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_is_sorted(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (ft_is_sorted(tab) != 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				i = 0;
			}
			i++;
		}
	}
}

// int	main(void)
// {
//     int	tab[] = {42, -7, 0, 100, 3, 3, -42};
//     int	size = 7;
//     int	i;

//     printf("Avant tri : ");
//     for (i = 0; i < size; i++)
//         printf("%d ", tab[i]);
//     printf("\n");

//     ft_sort_int_tab(tab, size);

//     printf("Après tri : ");
//     for (i = 0; i < size; i++)
//         printf("%d ", tab[i]);
//     printf("\n");

//     return 0;
// }