/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_helpers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/07/2025 21:57:01 by nachebbi          #+#    #+#             */
/*   Updated: 13/07/2025 22:02:13 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "rush_02.h"

char	*get_scale_name(t_dict *dict, int index)
{
	char	**scales;

	scales = {
		NULL, "1000", "1000000", "1000000000",
		"1000000000000", "1000000000000000",
		"1000000000000000000", NULL
	};

	if (index == 0 || !scales[index])
		return (NULL);
	return (find_value(dict, scales[index]));
}

int	is_zero_group(char *g)
{
	return (g[0] == '0' && g[1] == '0' && g[2] == '0');
}

char	*pad_number(char *num)
{
	int		len;
	int		pad;
	char	*res;
	int		i;

	len = ft_strlen(num);
	pad = (3 - (len % 3)) % 3;
	res = malloc(len + pad + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < pad)
	{
		res[i] = '0';
		i++;
	}
	while (i < len + pad)
	{
		res[i] = num[i - pad];
		i++;
	}
	res[i] = '\0';
	return (res);
}

void	print_two_digits(t_dict *d, char *num)
{
	char	key[3];
	char	tens[3];

	if (num[0] == '0')
	{
		if (num[1] != '0')
			write(1, find_value(d, (char[]){num[1], '\0'}),
				ft_strlen(find_value(d, (char[]){num[1], '\0'})));
		return ;
	}
	if (num[0] == '1' || num[1] == '0')
	{
		key[0] = num[0];
		key[1] = num[1];
		key[2] = '\0';
		write(1, find_value(d, key), ft_strlen(find_value(d, key)));
	}
	else
	{
		tens[0] = num[0];
		tens[1] = '0';
		tens[2] = '\0';
		write(1, find_value(d, tens), ft_strlen(find_value(d, tens)));
		if (num[1] != '0')
		{
			write(1, " ", 1);
			write(1, find_value(d, (char[]){num[1], '\0'}),
				ft_strlen(find_value(d, (char[]){num[1], '\0'})));
		}
	}
}

void	print_hundreds(t_dict *d, char *g)
{
	int	skip;

	skip = 1;
	if (g[0] != '0')
	{
		write(1, find_value(d, (char[]){g[0], '\0'}),
			ft_strlen(find_value(d, (char[]){g[0], '\0'})));
		write(1, " ", 1);
		write(1, find_value(d, "100"), ft_strlen(find_value(d, "100")));
		skip = 0;
	}
	if (g[1] != '0' || g[2] != '0')
	{
		if (!skip)
			write(1, " ", 1);
		print_two_digits(d, g + 1);
	}
}
