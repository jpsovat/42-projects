/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils2.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:15:35 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/20 11:16:33 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	expand_stash(char **stash, char *buffer)
{
	char	*temp;

	temp = str_join(*stash, buffer);
	free(*stash);
	*stash = temp;
}

ssize_t	read_and_expand(int fd, char **stash)
{
	char	buffer[BUFFER_SIZE + 1];
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		expand_stash(stash, buffer);
		if (!*stash)
			return (-1);
		if (find_newline(*stash) != -1)
			return (bytes_read);
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	return (bytes_read);
}
