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

// void    ft_putchar(char c)
// {
//     write(1, &c, 1);
// }

// int base_check(char *base)
// {
//     int len;
// 	int i;
// 	int j;

// 	j = 0;
// 	i = 0;
//     len = 0;
//     while (base[len])
//         len++;
//     if (len <= 1)
//         return (0);
//     while (base[i])
//     {
//         j = i + 1;
//         while (base[j])
//         {
//             if (base[i] == '-' || base[i] == '+' || base[i] == base[j])
//                 return (0);
//             j++;
//         }
//         i++;
//     }
//     return (len);
// }

// void    ft_putnbr_base(int nbr, char *base)
// {
//     int len;
    
//     len = base_check(base);
//     if (len <= 0)
//         return ;
//     if (nbr < 0)
//     {
//         nbr *= -1;
//         ft_putchar('-');
//     }
//     if (nbr + 1 <= len)
//     {
//         ft_putchar(base[nbr]);
//     }
//     else if (nbr >= len)
//     {
//         ft_putnbr_base(nbr / len, base);
//         ft_putnbr_base(nbr % len, base);
//     }
// }

#include <unistd.h>
#include <stdio.h>

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
			if (base[i] == base[j] || base[i] == '+' || base[i] =='-')
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
	if (base_len <= 1 || !ft_is_alphanum(base) || base_len <= 1)
		return ;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
	if (nbr < base_len)
		ft_putchar(base[nbr]);
}

int	main(void)
{
	int	nbr = -23453453;
	// int	nbr1 = 23453453;
	// int	nbr2 = 23453453;
	// int	nbr3 = -23453453;
	char base[17] = "0123456789ABCDEF";
	// char base1[] = "ABCDEF";
	// char base2[] = "0123456789";
	// char base3[] = "01";
	ft_putnbr_base(nbr, base);
	printf("'\n'");
	// ft_putnbr_base(nbr1, base1);
	// printf("'\n'");
	// ft_putnbr_base(nbr2, base3);
	// printf("'\n'");
	// ft_putnbr_base(nbr3, base2);
	// printf("'\n'");
	// ft_putnbr_base(nbr3, base3);
	return (0);
}
