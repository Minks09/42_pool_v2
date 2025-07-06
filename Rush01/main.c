/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 15:09:29 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/06 15:47:16 by nachebbi         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <rush.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}


int	main(int argc, char **argv)
{
	int				i;
	struct s_clues	indices;
	struct s_array	map;

	i = 0;
	if (argc != 2 || check_input(argv[1]))
		return (0);
	check_create(argv[1], map, indices);
	printf("indice north :%d, %d, %d, %d\n", clues->north[0],clues->north[1],clues->north[2],clues->north[3]);
	while (argv[1][i++])
	{
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
			input[i] = argv[1][i] - '0';
	}
	printf("nombre de chiffre entre 1 et 4 dans largument :%d\n",ft_count_int(argv[1]));
	i = 0;
	while (input[i] != '\0')
	{
		printf("les input recuperer sont :%d\n", input[i]);
		i++;
		input++;
	}
	return (0);
}

