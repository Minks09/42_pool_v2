/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/07/2025 21:57:01 by nachebbi          #+#    #+#             */
/*   Updated: 13/07/2025 22:02:23 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


#include "rush_02.h"

char	*pad_number(char *num);
int		is_zero_group(char *g);
void	print_hundreds(t_dict *d, char *g);
char	*get_scale_name(t_dict *dict, int index);

void	convert_number(t_dict *d, char *num)
{
	char	*padded;
	int		len;
	int		groups;
	int		i;
	int		first;

	padded = pad_number(num);
	if (!padded)
	{
		print_dict_error();
		return ;
	}
	len = ft_strlen(padded);
	groups = len / 3;
	first = 1;
	i = 0;
	while (i < groups)
	{
		char g[4];

		g[0] = padded[i * 3];
		g[1] = padded[i * 3 + 1];
		g[2] = padded[i * 3 + 2];
		g[3] = '\0';
		if (!is_zero_group(g))
		{
			if (!first)
				write(1, " ", 1);
			print_hundreds(d, g);
			if (get_scale_name(d, groups - i - 1))
			{
				write(1, " ", 1);
				write(1, get_scale_name(d, groups - i - 1),
					ft_strlen(get_scale_name(d, groups - i - 1)));
			}
			first = 0;
		}
		i++;
	}
	if (first)
		write(1, find_value(d, "0"), ft_strlen(find_value(d, "0")));
	write(1, "\n", 1);
	free(padded);
}
