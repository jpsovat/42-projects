/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:01:28 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/12 14:28:14 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* ========================================================================== */
/*                               HELPERS                                      */
/* ========================================================================== */

/*
** grow_line
** --------------------------------------------------------------------------
** Appends the content of `buffer` to the accumulated `line`.
** - Allocates a new string with the correct size
** - Copies old content + new buffer
** - Frees the previous line
** - Returns the updated line
*/
char	*grow_line(const char *buffer, char *line)
{
	char	*line_uptd;
	size_t	len_line;
	size_t	len_buffer;

	len_line = 0;
	if (line)
		len_line = strlen(line);
	len_buffer = strlen(buffer);
	line_uptd = (char *)malloc(len_line + len_buffer + 1);
	if (!line_uptd)
		return (NULL);
	ft_strcpy(buffer, line, line_uptd);
	if (line)
		free(line);
	return (line_uptd);
}

/*
** find_newline
** --------------------------------------------------------------------------
** Checks if a newline character '\n' exists in the buffer.
** - Only inspects the bytes actually read from fd
*/
int	find_newline(const char *buffer, ssize_t bytes_read)
{
	int	i;

	if (!buffer)
		return (-1);
	i = 0;
	while (i < bytes_read)
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

/* ========================================================================== */
/*                          GET_NEXT_LINE                                     */
/* ========================================================================== */

/*
** get_next_line (simplified version)
** --------------------------------------------------------------------------
** Reads from fd until a newline is found or EOF is reached.
** - Uses a static variable to accumulate content
** - Stops reading as soon as '\n' appears
** - Returns the accumulated line
*/
char	*get_next_line(int fd)
{
	ssize_t		bytes_read;
	char		*buffer;
	static char	*line;

	bytes_read = 1;
	buffer = (char *)malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (bytes_read > 0 && find_newline(buffer, bytes_read) == 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(buffer);
			return (NULL);
		}
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		line = grow_line(buffer, line);
	}
	free(buffer);
	return (line);
}
