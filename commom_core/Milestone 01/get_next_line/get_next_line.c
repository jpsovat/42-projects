/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:34:03 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/02 10:59:45 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*get_line(char **buffer)
{
	char	*line;
	char	*keep;
	size_t	til_null;
	size_t	til_new;

	til_new = strlen_at(*buffer, '\n');
	if ((*buffer)[til_new] == '\n')
		til_new++;
	line = cpy_buffer(*buffer, til_new);
	if (!line)
		return (NULL);
	til_null = strlen_at(*buffer, '\0');
	keep = cpy_buffer(*buffer + til_new, til_null - til_new + 1);
	if (!keep)
	{
		free (line);
		return (NULL);
	}
	free(*buffer);
	*buffer = keep;
	return (line);
}

static char	*get_full_stash(int fd, char *stash)
{
	char	*buffer;
	ssize_t	bytes;

	bytes = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (bytes > 0 && !find_chr(stash, '\n'))
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == 0)
			break ;
		if (bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[bytes] = '\0';
		stash = merge_stash_buffer(stash, buffer);
	}
	free(buffer);
	if (strlen_at(stash, '\0') > 0)
		return (stash);
	return (NULL);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = get_full_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = get_line(&stash);
	if (!stash[0])
	{
		free (stash);
		stash = NULL;
	}
	return (line);
}

/*
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd);

int	main(void)
{
	int		fd;
	char		*line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (1);
	line = get_next_line(fd);
	while (line)
	{
		printf("LINE: %s\n", line);
		free(line);
		line = get_next_line(fd);
	}
	printf("EOF reached\n");
	close(fd);
	return (0);
}
*/