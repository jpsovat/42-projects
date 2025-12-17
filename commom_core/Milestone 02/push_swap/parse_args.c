/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:35:33 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/12/17 12:37:10 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* Count how many strings are in a NULL-terminated char */
static int	count_strings(char **arr)
{
	int	i;

	i = 0;
	while (arr && arr[i])
		i++;
	return (i);
}

/* Free a NULL-terminated char */
static void	free_str_array(char **arr)
{
	int	i;

	if (!arr)
		return;
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

/* Join all argv arguments into a single array of strings */
char	**parse_args(int argc, char **argv)
{
	char	**result;
	char	**split;
	int		i;
	int		j;
	int		k;
	int		total;

	/* first pass: count total numbers */
	total = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (NULL);
		total += count_strings(split);
		free_str_array(split);
		i++;
	}

	/* allocate result array */
	result = malloc(sizeof(char *) * (total + 1));
	if (!result)
		return (NULL);

	/* second pass: fill result */
	i = 1;
	k = 0;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (free(result), NULL);
		j = 0;
		while (split[j])
			result[k++] = split[j++];
		free(split); /* free only the array, keep strings */
		i++;
	}
	result[k] = NULL;
	return (result);
}
