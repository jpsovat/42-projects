/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:27:41 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/11/15 12:33:46 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

// Duplicates a substring of s from index "start" up to "len" chars
char *substr(const char *s, int start, int len)
{
    char	*out;
	
	out = malloc(len + 1);
    if (!out)
        return NULL;

    for (int i = 0; i < len; i++)
        out[i] = s[start + i];

    out[len] = '\0';
    return out;
}


char	*str_join(char *s1, char *s2)
{
    size_t	len1 = s1 ? strlen(s1) : 0;
    size_t	len2 = strlen(s2);
    char	*new = malloc(len1 + len2 + 1);

    if (!new)
        return NULL;

    if (s1)
        strcpy(new, s1);
    else
        new[0] = '\0';

    strcpy(new + len1, s2);

    return new;
}

int	find_newline(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (i);
		i++;
	}
	return (-1);	// no newline found
}

int	main(void)
{
	int			fd;
	ssize_t		bytes_read;
	char		buffer[42];
	int			newline;
	char		*stash;
	char		*temp;
	int			nl;
	char		*line;
	char		*remainder;

	// getting the "id" of the file
	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
	{
		printf("Cannot open file\n");
		return (1);
	}

	stash = NULL;	// the big string we grow with chunks

	//	loop to create chunks into buffer and add it to stash
	while ((bytes_read = read(fd, buffer, 4)) > 0)
	{
		
		buffer[bytes_read] = '\0';

		// Add new chunk to stash
        temp = str_join(stash, buffer);
        free(stash);
        stash = temp;

		// repeat the loop adding chunks untill we find a new line
		if (find_newline(buffer) != -1)
			break;
	}

	printf("Full line stored in stash: \"%s\"\n", stash);

	// find the \n postition
	nl = find_newline(stash);

	if (nl >= 0)
	{
		//everything before \n
		line = substr(stash, 0, nl);

		//everything after \n
		remainder = substr(stash, nl + 1, strlen(stash) - (nl + 1));

		printf("LINE: \"%s\"\n", line);
    	printf("REMAINDER: \"%s\"\n", remainder);

    	free(line);
    	free(remainder);
	}
	

	free(stash);
	
	return (0);
}