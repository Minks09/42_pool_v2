/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:12:27 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/03 15:25:50 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}


// int main(void)
// {
// 	char src[50], dest[50];

// 	strcpy(src, " world");
// 	strcpy(dest, "HEllO");
// 	printf("%s\n%s\n", src, dest);
// 	ft_strcat(dest, src);
// 	printf("Final destination string : |%s|", dest);
// 	return (0);
// }