/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:07:40 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/01 16:11:45 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_alpha(char str)
{
	while (str)
	{
		if (!((str >= 97 && str <= 122) || (str >= 65 && str <= 90)))
			return (0);
		str++;
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	while (*str)
	{
		if (!(ft_is_alpha(*str)) && (*str++ >= 97 && *str++ <= 122))
			*str++ -= 20;
		str++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "bonjour voici une	string '\n'sans majuscule'\n'";
	ft_strcapitalize(str);
	printf("%s", str);
}
