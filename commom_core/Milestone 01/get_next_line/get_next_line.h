/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:09:05 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/15 10:44:50 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/* ========================================================================== */
/*                               MAIN FUNCTION                                */
/* ========================================================================== */

char	*get_next_line(int fd);

/* ========================================================================== */
/*                                  HELPERS                                   */
/* ========================================================================== */

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen_until(const char *str, int stop);
char	*find_newline(const char *str);
char	*copy_chunk(const char *str, size_t len);
char	*merge_chunks(char *stash, const char *chunk);

#endif
