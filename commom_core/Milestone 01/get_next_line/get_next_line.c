/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:01:28 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/15 10:52:13 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* ========================================================================== */
/*                                   HELPERS                                  */
/* ========================================================================== */

/*
** extract_line
** --------------------------------------------------------------------------
** Extracts one line from stash and updates it.
*/
static char	*extract_line(char **stash)
{
	char	*line;
	char	*remaining;
	size_t	line_len;
	size_t	total_len;

	line_len = ft_strlen_until(*stash, '\n');
	if ((*stash)[line_len] == '\n')
		line_len++;
	line = copy_chunk(*stash, line_len);
	if (!line)
		return (NULL);
	total_len = ft_strlen_until(*stash, '\0');
	remaining = copy_chunk(*stash + line_len, total_len - line_len + 1);
	if (!remaining)
	{
		free(line);
		return (NULL);
	}
	free(*stash);
	*stash = remaining;
	return (line);
}

/*
** read_and_grow
** --------------------------------------------------------------------------
** Reads from fd and appends data to stash until newline or EOF.
*/
static char	*read_and_grow(int fd, char *stash)
{
	char	*buffer;
	ssize_t	bytes_read;

	bytes_read = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (bytes_read > 0 && !find_newline(stash))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == 0)
			break ;
		if (bytes_read < 0)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		stash = merge_chunks(stash, buffer);
	}
	free(buffer);
	if (ft_strlen_until(stash, '\0') > 0)
		return (stash);
	return (NULL);
}

/* ========================================================================== */
/*                               GET_NEXT_LINE                                */
/* ========================================================================== */

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stash = read_and_grow(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(&stash);
	if (!stash[0])
	{
		free(stash);
		stash = NULL;
	}
	return (line);
}
