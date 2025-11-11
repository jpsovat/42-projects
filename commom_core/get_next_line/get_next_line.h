/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 07:56:39 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/11 17:51:05 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

/*
** The buffer size used on each read() call.
** Evaluators will change this value (1, 32, 9999, etc).
** Your code must work for ANY positive value.
*/
#ifndef BUFF_SIZE
#define BUFF_SIZE 42
#endif

/*
** get_next_line:
**  - fd: file descriptor to read from
**  - line: address of a char* where we will place a freshly malloc'd line
** Returns:
**  1  : a line has been read (line DOES NOT include the '\n')
**  0  : EOF (no more lines)
** -1  : error (invalid fd, malloc/read failure, etc.)
*/
int	get_next_line(const int fd, char **line);

#endif /* GET_NEXT_LINE_H */