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

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

int	find_newline(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*str_join(char *s1, char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*new;
	size_t	i;
	size_t	j;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = malloc(len1 + len2 + 1);
	if (!new)
		return (NULL);
	i = -1;
	while (++i < len1)
		new[i] = s1[i];
	j = 0;
	while (j < len2)
	{
		new[i + j] = s2[j];
		j++;
	}
	new[len1 + len2] = '\0';
	return (new);
}

char	*substr(const char *s, int start, int len)
{
	char	*out;
	int		i;

	out = malloc(len + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (i < len)
	{
		out[i] = s[start + i];
		i++;
	}
	out[len] = '\0';
	return (out);
}

char	*extract_line(char **stash_ptr)
{
	char	*stash;
	char	*line;
	char	*remainder;
	int		nl;

	stash = *stash_ptr;
	nl = find_newline(stash);
	if (nl >= 0)
	{
		line = substr(stash, 0, nl + 1);
		if (!line)
			return (NULL);
		remainder = substr(stash, nl + 1,
				ft_strlen(stash) - (nl + 1));
		free(stash);
		*stash_ptr = remainder;
		return (line);
	}
	line = substr(stash, 0, ft_strlen(stash));
	free(stash);
	*stash_ptr = NULL;
	return (line);
}

void	expand_stash(char **stash, char *buffer)
{
	char	*temp;

	temp = str_join(*stash, buffer);
	if (!temp)
		return ;
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
