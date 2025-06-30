/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 18:09:37 by nachebbi          #+#    #+#             */
/*   Updated: 2025/06/30 19:37:02 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_separator(char c)
{
	if ( c)
}

int	ft_strcapitalize(char *str)
{
	if (!(*str))
		return (1);
	while (*str)
	{
		if (!(str >= 32 && str <= 126))
			return (0);
		str++;
	}
	return (1);
}
