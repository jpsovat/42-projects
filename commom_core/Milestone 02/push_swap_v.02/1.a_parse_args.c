/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.a_parse_args.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:31:49 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/02/09 12:08:37 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* =============================    HELPERS    ============================== */

/*  count how many strings there are in the string array  */

static int	count_strings(char **str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

/*  count how many arguments there are in the input  */

static int	count_total_arguments(int argc, char **argv)
{
	int		i;
	int		total_arguments;
	char	**arguments;

	i = 1;
	total_arguments = 0;
	while (i < argc)
	{
		arguments = ft_split(argv[i], ' ');
		if (!arguments)
			return (-1);
		total_arguments += count_strings(arguments);
		ft_free_arguments(arguments);
		i++;
	}
	return (total_arguments);
}

/*  pre-fill with NULLs to make error handling safer   */

static void	fill_null(char **array, int size)
{
	int	i;

	i = 0;
	while (i <= size)
	{
		array[i] = NULL;
		i++;
	}
}

/*  fill the buffer array with arguments  */

static int	fill_arguments(char **buffer, char **argv, int argc)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	i = 1;
	k = 0;
	while (i < argc)
	{
		array = ft_split(argv[i], ' ');
		if (!array)
			return (0);
		j = 0;
		while (array[j])
		{
			buffer[k] = array[j];
			j++;
			k++;
		}
		free(array);
		i++;
	}
	return (1);
}

/* ==========================    MAIN FUNCTION    =========================== */

/*  trasnform the input arguments into a list of strings  */

char	**parse_args(int argc, char **argv)
{
	int		total_arguments;
	char	**args_buffer;

	total_arguments = count_total_arguments(argc, argv);
	if (total_arguments <= 0)
		return (NULL);
	args_buffer = malloc(sizeof (char *) * (total_arguments + 1));
	if (!args_buffer)
		return (NULL);
	fill_null(args_buffer, total_arguments);
	if (!fill_arguments(args_buffer, argv, argc))
	{
		ft_free_arguments(args_buffer);
		return (NULL);
	}
	return (args_buffer);
}
