/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:07:40 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/03 16:49:23 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

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
	int	i;

	i = 1;
	if ((str[0] >= 97) && str[i] <= 122)
		str[0] -= 32;
	while (str[i])
	{
		if ((str[i - 1] <= 47) && ((str[i] >= 97) && (str[i] <= 122)))
			str[i] -= 32;
		if ((((str[i - 1] >= 'A') && (str[i - 1] <= 'Z'))
				|| ((str[i - 1] >= 'a') && (str[i - 1] <= 'z')))
			&& ((str[i] >= 'A') && (str[i] <= 'Z')))
			str[i] += 32;
		i++;
	}
	return (str);
}

//si str[i -1] est une lettre alors str[i] minuscule
// int	main(void)
// {
// 	char	str[] = "bonjour voici une	string '\n'sans majuscule'\n'";
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }
