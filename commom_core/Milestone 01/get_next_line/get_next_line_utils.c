/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 14:08:10 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/12 14:28:16 by jsovat-d         ###   ########.fr       */
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
