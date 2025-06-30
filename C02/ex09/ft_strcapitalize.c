/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 19:07:40 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/30 19:31:26 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcapitalize(char *str)
{
	while (*str)
	{
		if (!(ft_is_alpha(str) && (str++ >= 97 && str <= 122))
			*str++ -= 20;
		str++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "bonjour voici une	string '\n'sans majuscule'\n'";
	ft_strcapitalize(str);
}