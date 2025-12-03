/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:44:22 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/28 13:52:21 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static void	ft_free_split(char **array, size_t i)
{
	while (i > 0)
		free(array[--i]);
	free(array);
}

static char	*ft_get_word(char const *s, char c, size_t *start)
{
	size_t	end;
	char	*res;

	while (s[*start] && s[*start] == c)
		(*start)++;
	if (!s[*start])
		return (NULL);
	end = *start;
	while (s[end] && s[end] != c)
		end++;
	res = ft_substr(s, *start, end - *start);
	*start = end;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	n_str;
	size_t	i;
	size_t	start;
	char	**array;
	char	*word;

	if (!s)
		return (NULL);
	n_str = ft_count_substr(s, c);
	array = malloc(sizeof(char *) * (n_str + 1));
	if (!array)
		return (NULL);
	i = 0;
	start = 0;
	while (i < n_str)
	{
		word = ft_get_word(s, c, &start);
		if (!word)
			return (ft_free_split(array, i), NULL);
		array[i++] = word;
	}
	array[i] = NULL;
	return (array);
}
