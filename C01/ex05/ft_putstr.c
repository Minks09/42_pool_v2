/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:24:27 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/26 15:37:02 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str + i, 1);
		i++;
	}
}

// int	main(void)
// {
// 	char *test1 = "Hello, 42!";
// 	char *test2 = "";
// 	char *test3 = NULL;

// 	ft_putstr(test1); // Test normal
// 	write(1, "\n", 1);
// 	puts(test1);
// 	write(1, "\n", 1);
// 	ft_putstr(test3); // Test normal
// 	write(1, "\n", 1);
// 	puts(test3);
// 	write(1, "\n", 1);
// 	ft_putstr(test2); // Test normal
// 	write(1, "\n", 1);
// 	puts(test2);
// 	write(1, "\n", 1);
// 	return (0);
// }
