/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 17:37:04 by jsovat-d          #+#    #+#             */
/*   Updated: 2026/01/22 17:42:31 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	*stack_to_array(t_node *a, int size)
{
	int		*arr;
	int		i;
	t_node	*cur;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	cur = a;
	while (i < size && cur)
	{
		arr[i] = cur->value;
		i++;
		cur = cur->next;
	}
	return (arr);
}

static void	sort_array(int *arr, int size)
{
	int	i;
	int	tmp;
	int	swapped;

	while (size > 1)
	{
		i = 0;
		swapped = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			break ;
		size--;
	}
}

static int	find_index(int *arr, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

static void	fill_index(t_node *a, int *arr, int size)
{
	t_node	*cur;
	int		i;

	cur = a;
	while (cur)
	{
		i = find_index(arr, size, cur->value);
		cur->index = i;
		cur = cur->next;
	}
}

int	assign_index(t_node *a)
{
	int	size;
	int	*arr;

	size = stack_size(a);
	arr = stack_to_array(a, size);
	if (!arr)
		return (0);
	sort_array(arr, size);
	fill_index(a, arr, size);
	free(arr);
	return (1);
}
