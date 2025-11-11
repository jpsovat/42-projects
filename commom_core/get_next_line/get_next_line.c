/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 08:02:10 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/11 19:11:18 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static ssize_t	find_newline(const char *s)
{
	ssize_t	i = 0;

	if (!s)
		return (-1);
	while (s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

static char	*substr_dup(const char *s, ssize_t start, ssize_t len)
{
	char	*str;
	ssize_t	i;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}


int	get_next_line(const int fd, char **line)
{
	static char	*remainder;
	char		buffer[BUFF_SIZE + 1];
	ssize_t		bytes_read;

	if (fd < 0 || !line || BUFF_SIZE <= 0)
		return (-1);

	bytes_read = read(fd, buffer, BUFF_SIZE);
	if (bytes_read < 0)
		return (-1);
	if (bytes_read == 0)
		return (0);

	buffer[bytes_read] = '\0';
	*line = malloc(bytes_read + 1);
	if (!*line)
		return (-1);

	for (ssize_t i = 0; i < bytes_read; i++)
		(*line)[i] = buffer[i];
	(*line)[bytes_read] = '\0';

	return (1);
}