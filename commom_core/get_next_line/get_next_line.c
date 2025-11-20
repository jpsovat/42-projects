/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:34:03 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/20 11:20:22 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	*stash;
	ssize_t		bytes_read;

	if (fd < 0 || !line)
		return (-1);
	bytes_read = read_and_expand(fd, &stash);
	if (bytes_read < 0)
		return (-1);
	if (!stash || stash[0] == '\0')
		return (0);
	*line = extract_line(&stash);
	if (!*line)
		return (-1);
	return (1);
}
