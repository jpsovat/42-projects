/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:10:17 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/02 11:46:18 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}

size_t	strlen_at(const char *str, int avoid)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != avoid)
		i++;
	return (i);
}

char	*find_chr(const char *stash, int to_find)
{
	if (!stash)
		return (NULL);
	while (*stash)
	{
		if (*(unsigned char *)stash == (unsigned char)to_find)
			return ((char *)stash);
		stash++;
	}
	if (*(unsigned char *)stash == (unsigned char)to_find)
		return ((char *)stash);
	return (NULL);
}

char	*cpy_buffer(const char *buffer, size_t len)
{
	char	*cpy;
	size_t	i;

	cpy = (char *) malloc(len + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (buffer[i] && i < len)
	{
		cpy[i] = buffer[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*merge_stash_buffer(char *stash, const char *buffer)
{
	size_t	len_stash;
	size_t	len_buff;
	char	*merge;

	len_stash = 0;
	len_buff = 0;
	if (stash)
		len_stash = strlen_at(stash, '\0');
	len_buff = strlen_at(buffer, '\0');
	merge = (char *)malloc(len_stash + len_buff + 1);
	if (!merge)
		return (NULL);
	if (stash)
		ft_memcpy(merge, stash, len_stash);
	ft_memcpy(merge + len_stash, buffer, len_buff);
	merge[len_stash + len_buff] = '\0';
	if (stash)
		free(stash);
	return (merge);
}
