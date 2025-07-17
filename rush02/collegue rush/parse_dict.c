#include "rush_02.h"

t_dict	*parse_dict(char *filename)
{
	t_dict
	int		fd;
	int		r;
	char	buf[8192];
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (NULL);
	r = read(fd, buf, 8191);
	if (r <= 0)
		return (NULL);
	buf[r] = '\0';
	close(fd);
	keep_parsing(fd, line, buf);
	return (head);
}


t_dict	keep_parsing(int fd, char *line, char *buf)
{
	t_dict	*head;
	t_dict	*tail;
	char	*end;

	head = NULL;
	tail = NULL;
	line = buf;
	while (*line)
	{
		while (*line == '\n')
			line++;
		end = line;
		while (*end && *end != '\n')
			end++;
		*end = '\0';
		if (*line && is_valid_line(line))
		{
			if (!add_dict_entry(&head, &tail, line))
				return (NULL);
		}
		line = end + 1;
	}
	return (head);
}