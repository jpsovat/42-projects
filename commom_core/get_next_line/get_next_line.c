/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:34:03 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/15 15:41:52 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

// -----------------------------------------
// strlen (needed by join & extract_line)
// -----------------------------------------
static size_t   ft_strlen(const char *s)
{
    size_t i = 0;
    while (s && s[i])
        i++;
    return i;
}

// -----------------------------------------
// Finds position of '\n'. Returns index or -1
// -----------------------------------------
static int find_newline(const char *s)
{
    int i = 0;
    while (s && s[i])
    {
        if (s[i] == '\n')
            return i;
        i++;
    }
    return -1;
}

// -----------------------------------------
// Joins s1 + s2 into new string
// s1 may be NULL
// -----------------------------------------
static char *str_join(char *s1, char *s2)
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
        return NULL;
	i = 0;
    while (i < len1)
    {
        new[i] = s1[i];
        i++;
    }
	j = 0;
    while (j < len2)
    {
        new[i + j] = s2[j];
        j++;
    }
    new[len1 + len2] = '\0';

    return new;
}

// -----------------------------------------
// Create substring
// -----------------------------------------
static char *substr(const char *s, int start, int len)
{
    char *out;
    int  i;

	out = malloc(len + 1);
    if (!out)
        return NULL;
	i = 0;
    while (i < len)
    {
        out[i] = s[start + i];
        i++;
    }
    out[len] = '\0';
    return out;
}

// -----------------------------------------
// Extract line + adjust stash
// -----------------------------------------
static char *extract_line(char **stash_ptr)
{
    char	*stash;
	char	*stash_ptr;
    int		nl;
    char	*line;
    char	*remainder;

	nl = find_newline(stash);
    if (nl >= 0)
    {
        line = substr(stash, 0, nl);
        remainder = substr(stash, nl + 1, ft_strlen(stash) - (nl + 1));
        free(stash);
        *stash_ptr = remainder;
        return line;
    }
    else
    {
        line = substr(stash, 0, ft_strlen(stash));
        free(stash);
        *stash_ptr = NULL;
        return line;
    }
}

// -----------------------------------------
// get_next_line
// -----------------------------------------
int get_next_line(int fd, char **line)
{
    static char *stash = NULL;
    char        buffer[42];
    ssize_t     bytes_read;
    char       *temp;

    if (fd < 0 || !line)
        return (-1);

    while ((bytes_read = read(fd, buffer, 5)) > 0)
    {
        buffer[bytes_read] = '\0';

        temp = str_join(stash, buffer);
        free(stash);
        stash = temp;
        if (!stash)
            return (-1);

        if (find_newline(stash) != -1)
            break;
    }

    if (bytes_read < 0)
        return (-1);

    if (!stash || stash[0] == '\0')
        return (0);

    *line = extract_line(&stash);
    if (!*line)
        return (-1);

    return (1);
}
