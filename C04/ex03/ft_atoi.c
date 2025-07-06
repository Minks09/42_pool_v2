
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 01:08:52 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/04 01:29:33 by nachebbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13)
		|| *str == '-' || *str == '+')
	{
		if (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}

int	main(void)
{
	int res = ft_atoi("  	 -+--+--128df345433");
	printf("nbr = %d", res);
}