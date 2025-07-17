/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:29:02 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/17 22:28:55 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strlen_tab(char **str, int size)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i] && i < size)
	{
		res += ft_strlen(str[i]);
		i++;
	}
	return (res);
}

char	*ft_alloc_dyn(char **strs, char *sep, int size)
{
	int		str_size;
	char	*res;

	str_size = ft_strlen_tab(strs, size);
	str_size += (size - 1) * ft_strlen(sep);
	res = malloc(sizeof (char) * (str_size + 1));
	if (!res)
		return (NULL);
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
	while (i <= size - 1 && strs[i])
	{
		while (strs[i][j] && i < size)
			res[res_size++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			res[res_size++] = sep[j++];
		j = 0;
		i++;
	}
	res[res_size] = '\0';
	return (res);
}
// #include <stdio.h>

// int main(int ac, char **av)
// {
//     (void)ac;
//     (void)av;
//     char *c[10] = {NULL};
//     printf("result [%s]\n", ft_strjoin(0, c, ""));

//     char *tmp[10] = {"Hello"};
//     printf("result [%s]\n", ft_strjoin(1, tmp, ","));

//     char *tmp2[10] = {"Hello", "world", "!"};
//     printf("result [%s]\n", ft_strjoin(3, tmp2, ", "));

//     char *tmp3[10] = {"", "Hello", "", "world"};
//     printf("result [%s]\n", ft_strjoin(4, tmp3, "-"));

//     char *c2[10];
//     printf("result [%s]\n", ft_strjoin(1, c2, ""));
// }
