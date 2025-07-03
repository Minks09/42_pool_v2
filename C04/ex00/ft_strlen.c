/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 15:37:38 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/29 16:20:31 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int main(void)
// {
//     char *test1 = "Hello, world!";
//     char *test2 = "";
//     char *test3 = "42";
//     printf("Test 1 : \"%s\" -> %d\n", test1, ft_strlen(test1));
//     printf("Test 2 : \"%s\" -> %d\n", test2, ft_strlen(test2));
//     printf("Test 3 : \"%s\" -> %d\n", test3, ft_strlen(test3));
//     return 0;
// }