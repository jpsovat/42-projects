/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:08:10 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/13 20:01:40 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* ========================================================================== */
/*                              STRING UTILS                                  */
/* ========================================================================== */

/*
** ft_strcpy
** --------------------------------------------------------------------------
** Copies the content of `line` followed by `buffer` into `line_uptd`.
** - Assumes `line_uptd` is already allocated with enough space
** - Handles NULL `line` safely
** - Always null-terminates the resulting string
*/
void	ft_strcpy(const char *buffer, const char *line, char *line_uptd)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (line)
	{
		while (line[i] != '\0')
		{
			line_uptd[i] = line[i];
			i++;
		}
	}
	j = 0;
	if (buffer)
	{
		while (buffer[j] != '\0')
		{
			line_uptd[i + j] = buffer[j];
			j++;
		}
	}
	line_uptd[i + j] = '\0';
}

/*
** strlen
** --------------------------------------------------------------------------
** Returns the length of a string.
** - Safe against NULL pointers
*/
size_t	strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/*
** clear
** --------------------------------------------------------------------------
** keep only what is before '\n'
*/
char	*clear(char *str)
{
	int		i;
	char	*line;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

/*
** clear
** --------------------------------------------------------------------------
** keep only what is before '\n'
*/
char	*keep(char *str)
{
	int		i;
	int		j;
	int		k;
	char	*line;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	i++;
	j = i;
	while (str[j] && str[j] != '\n')
		j++;
	line = malloc(sizeof(char) * ((j - i) + 1));
	if (!line)
		return (NULL);
	k = 0;
	while (i < j)
	{
		line[k] = str[i];
		i++;
		k++;
	}
	line[k] = '\0';
	return (line);
}