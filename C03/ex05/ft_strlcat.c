/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:50:29 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/03 19:48:19 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	while (dest[i] != '\0')
		i++;
	while (*src && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest[i]);
}
