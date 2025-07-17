#include "rush-02.h"

// Checks if input is a number (all digits)
int	is_valid_number(char *str)
{
	if (!*str)
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

// Prints "Error"
void	print_error(void)
{
	write(1, "Error\n", 6);
}

// Prints "Dict Error"
void	print_dict_error(void)
{
	write(1, "Dict Error\n", 11);
}

// Removes spaces from beginning and end of string
char	*trim_spaces(char *str)
{
	int		start;
	int		end;
	int		i;
	char	*trimmed;

	start = 0;
	end = ft_strlen(str) - 1;
	while (str[start] == ' ')
		start++;
	while (end > start && str[end] == ' ')
		end--;
	trimmed = malloc(end - start + 2);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		trimmed[i] = str[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
