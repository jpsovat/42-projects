/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:35:33 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/19 21:38:55 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_strings(char **arr)
{
	int	i;

	i = 0;
	while (arr && arr[i])
		i++;
	return (i);
}

static int	count_total_tokens(int argc, char **argv)
{
	char	**split;
	int		i;
	int		total;

	i = 1;
	total = 0;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (-1);
		total += count_strings(split);
		free_tokens(split);
		i++;
	}
	return (total);
}

static void	init_null_array(char **arr, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		arr[i] = NULL;
		i++;
	}
}

static int	fill_tokens(char **res, int argc, char **argv)
{
	char	**split;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (0);
		j = 0;
		while (split[j])
			res[k++] = split[j++];
		free(split);
		i++;
	}
	return (1);
}

char	**parse_args(int argc, char **argv)
{
	char	**result;
	int		total;

	total = count_total_tokens(argc, argv);
	if (total <= 0)
		return (NULL);
	result = malloc(sizeof(char *) * (total + 1));
	if (!result)
		return (NULL);
	init_null_array(result, total);
	if (!fill_tokens(result, argc, argv))
		return (free_tokens(result), NULL);
	return (result);
}
