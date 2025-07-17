#ifndef RUSH_02_H
# define RUSH_02_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_dict
{
	char			*key;
	char			*value;
	struct s_dict	*next;
}	t_dict;

t_dict	*parse_dict(char *filename);
char	*find_value(t_dict *dict, char *key);
void	free_dict(t_dict *dict);

void	convert_number(t_dict *dict, char *number);

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		is_valid_number(char *str);
void	print_error(void);
void	print_dict_error(void);
char	*trim_spaces(char *str);

#endif
