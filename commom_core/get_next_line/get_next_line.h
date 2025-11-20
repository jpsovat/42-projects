/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:08:59 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/20 11:21:08 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

/*BUFFER_SIZE can be edited with -D BUFFER_SIZE=n when compiling.*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

size_t	ft_strlen(const char *s);
int		find_newline(const char *s);
char	*str_join(char *s1, char *s2);
char	*substr(const char *s, int start, int len);
char	*extract_line(char **stash_ptr);

void	expand_stash(char **stash, char *buffer);
ssize_t	read_and_expand(int fd, char **stash);

int		get_next_line(int fd, char **line);

#endif
