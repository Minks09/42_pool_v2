/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:03:14 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/03 19:19:43 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	res;

	res = 0;
	while ((*s1 == *s2) && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	res = *s1 - *s2;
	return (res);
}
