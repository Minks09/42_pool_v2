/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:29:02 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/17 18:23:51 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_tab(char **str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res += ft_strlen(str[i]);
		i++;
	}
	return (res);
}

char	*ft_alloc_dyn(char **strs, char *sep, int size)
{
	int		i;
	int		j;
	int		str_size;
	char	*res;

	i = 0;
	j = 0;
	str_size = ft_strlen_tab(strs);
	while (strs[i] && i <= size)
	{
		if (i < size)
			str_size += ft_strlen(sep);
		i++;
	}
	res = malloc(sizeof (char) * (str_size + 1));
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		res_size;
	char	*res;

	i = 0;
	j = 0;
	res_size = 0;
	res = ft_alloc_dyn(strs, sep, size);
	if (!(res))
		return (0);
	while (i++ <= size)
	{
		while (strs[i][j++] && res[res_size])
			res[res_size++] = strs[i][j];
		j = 0;
		while (sep && i < size)
			res[res_size++] = sep[j++];
		j = 0;
	}
	res[res_size] = '\0';
	return (res);
}
