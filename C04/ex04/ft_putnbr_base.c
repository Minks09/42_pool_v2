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
	while (*base)
	{
		j = 0;
		while (base [i] && base[j])
		{
			if (base[i] != base[j])
				j++;
			else
				return (1);
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
	if (base <= 1 || !ft_is_alpha(base) && check_dup(base) == 1)
		return ;
	if (number < 0)
	{
		ft_putchar('-');
		number *= -1;
	}
	while (number >= ft_strlen(base))
		ft_putnbr_base((number / ft_strlen(base)), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}
