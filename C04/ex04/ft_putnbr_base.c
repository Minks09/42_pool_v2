/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/04 13:53:34 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/04 14:15:53 by nachebbi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

int	ft_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_dup(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base [j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	number ;
	int		base_len;

	base_len = ft_strlen(base);
	number = nbr;
	if (base_len <= 1 || !ft_is_alpha(base) || check_dup(base) == 1)
		return ;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (nbr < base_len)
		ft_putchar(base[nbr]);
	else
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
}

int	main(void)
{
	int	nbr = -23453453;
	char base[] = "0123456789ABCDEF";
	ft_putnbr_base(nbr, base);
	return (0);
}
