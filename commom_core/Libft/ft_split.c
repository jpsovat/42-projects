/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:44:22 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/27 21:12:22 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_count_substr(const char *str, char dlm)
{
	size_t	i;
	size_t	n_str;

	i = 0;
	n_str = 0;
	while (str[i])
	{
		while (str[i] && str[i] == dlm)
			i++;
		if (str[i])
		{
			n_str++;
			while (str[i] && str[i] != dlm)
				i++;
		}
	}
	return (n_str);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_str;
	size_t	i;
	size_t	start;
	size_t	end;
	char	**array;

	if (!s)
		return (NULL);
	n_str = ft_count_substr(s, c);
	array = (char **)malloc(sizeof(char *) * (n_str + 1));
	if (!array)
		return (NULL);
	array[n_str] = NULL;
	i = 0;
	start = 0;
	while (s[start])
	{
		while (s[start] && s[start] == c)
			start++;
		if (!s[start])
			break ;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		array[i] = ft_substr(s, start, end - start);
		if (!array[i])
		{
			while (i > 0)
				free(array[--i]);
			free(array);
			return (NULL);
		}
		i++;
		start = end;
	}
	array[i] = NULL;
	return (array);
}
