#include "rush_02.h"

static int	init_args(int argc, char **argv, char **dict_file, char **number)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2)
	{
		*dict_file = "numbers.dict";
		*number = argv[1];
	}
	else
	{
		*dict_file = argv[1];
		*number = argv[2];
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	char	*dict_file;
	char	*number;

	if (!init_args(argc, argv, &dict_file, &number))
	{
		print_error();
		return (1);
	}
	if (!is_valid_number(number))
	{
		print_error();
		return (1);
	}
	dict = parse_dict(dict_file);
	if (!dict)
	{
		print_dict_error();
		return (1);
	}
	convert_number(dict, number);
	free_dict(dict);
	return (0);
}
