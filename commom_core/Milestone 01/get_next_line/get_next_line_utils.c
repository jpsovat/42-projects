/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:08:10 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/15 10:45:53 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* ========================================================================== */
/*                               STRING HELPERS                               */
/* ========================================================================== */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

size_t	ft_strlen_until(const char *str, int stop)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != stop)
		i++;
	return (i);
}

char	*find_newline(const char *str)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == '\n')
			return ((char *)str);
		str++;
	}
	return (NULL);
}

/* ========================================================================== */
/*                               MEMORY HELPERS                               */
/* ========================================================================== */

char	*copy_chunk(const char *str, size_t len)
{
	char	*copy;
	size_t	i;

	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	*merge_chunks(char *stash, const char *chunk)
{
	size_t	len_stash;
	size_t	len_chunk;
	char	*merged;

	len_stash = ft_strlen_until(stash, '\0');
	len_chunk = ft_strlen_until(chunk, '\0');
	merged = (char *)malloc(len_stash + len_chunk + 1);
	if (!merged)
		return (NULL);
	if (stash)
		ft_memcpy(merged, stash, len_stash);
	ft_memcpy(merged + len_stash, chunk, len_chunk);
	merged[len_stash + len_chunk] = '\0';
	if (stash)
		free(stash);
	return (merged);
}
