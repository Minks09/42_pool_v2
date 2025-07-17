/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nachebbi <nachebbi@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 13/07/2025 21:57:01 by nachebbi          #+#    #+#             */
/*   Updated: 13/07/2025 22:02:31 by nachebbi         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */


#include "rush_02.h"

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	is_valid_line(char *line)
{
	int	i;
	int	colon_found;

	i = 0;
	colon_found = 0;
	while (line[i])
	{
		if (line[i] == ':')
		{
			if (colon_found)
				return (0);
			colon_found = 1;
		}
		else if (!is_printable(line[i]) && line[i] != '\n')
			return (0);
		i++;
	}
	return (colon_found);
}

char	*extract_key(char *line)
{
	int		i;
	int		start;
	int		j;
	char	*key;

	i = 0;
	while (line[i] == ' ')
		i++;
	start = i;
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	key = malloc(i - start + 1);
	if (!key)
		return (NULL);
	j = 0;
	while (start < i)
		key[j++] = line[start++];
	key[j] = '\0';
	return (key);
}

char	*extract_value(char *line)
{
	char	*start;
	char	*raw;
	char	*trimmed;
	int		i;

	while (*line != ':' && *line)
		line++;
	if (!*line)
		return (NULL);
	line++;
	while (*line == ' ')
		line++;
	start = line;
	while (*line && *line != '\n')
		line++;
	raw = malloc(line - start + 1);
	if (!raw)
		return (NULL);
	i = 0;
	while (start < line)
		raw[i++] = *start++;
	raw[i] = '\0';
	trimmed = trim_spaces(raw);
	free(raw);
	return (trimmed);
}

int	add_dict_entry(t_dict **head, t_dict **tail, char *line)
{
	t_dict	*entry;
	char	*key;
	char	*val;

	key = extract_key(line);
	val = extract_value(line);
	if (!key || !val)
		return (0);
	entry = malloc(sizeof(t_dict));
	if (!entry)
		return (0);
	entry->key = key;
	entry->value = val;
	entry->next = NULL;
	if (!*head)
		*head = entry;
	else
		(*tail)->next = entry;
	*tail = entry;
	return (1);
}
