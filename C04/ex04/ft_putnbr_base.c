/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 04/07/2025 13:51:54 by nachebbi          #+#    #+#             */
/*   Updated: 10/07/2025 18:48:45 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_alphanum(char *str)
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

int	check_dup(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (base[i] && base[i + 1] != '\0')
	{
		j = i + 1;
		while (base [j])
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (ft_strlen(base));
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	number ;
	int		base_len;

	base_len = check_dup(base);
	number = nbr;
	if (base_len <= 0 || !ft_is_alphanum(base))
		return ;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (number >= base_len)
	{
		ft_putnbr_base(number / base_len, base);
		ft_putnbr_base(number % base_len, base);
	}
	if (number + 1 <= base_len)
		ft_putchar(base[number]);
}

// int	main(void)
// {
// 	int	nbr = -110;
// 	// int	nbr1 = 23453453;
// 	// int	nbr2 = 23453453;
// 	// int	nbr3 = 23453453;
// 	// char base[] = "0123456789ABCDEF";
// 	// char base1[] = "ABCDEF";
// 	// char base2[] = "0123456789";
// 	char base3[] = "01";
// 	ft_putnbr_base(nbr, base3);
// 	// printf("\n");
// 	// ft_putnbr_base(nbr1, base1);
// 	// printf("\n");
// 	// ft_putnbr_base(nbr2, base3);
// 	// printf("\n");
// 	// ft_putnbr_base(nbr3, base2);
// 	// printf("\n");
// 	// ft_putnbr_base(nbr3, base3);
// 	return (0);
// }
