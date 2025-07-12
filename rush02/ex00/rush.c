/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:06:16 by nachebbi          #+#    #+#             */
/*   Updated: 2025/07/12 14:06:16 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


int	main(int ac, char **av)
{
	char	*dict_file;
	char	*number_str;

	if (ac == 2)
	{
		number_str = av[1];
		dict_file= "./number.dict";
	}
	else if (ac == 3)
	{
		dict_file = av[1];
		number_str = av[2];
	}
	else
	{
		wr_error(2);
		return (1);
	}
	if ()
	}
	