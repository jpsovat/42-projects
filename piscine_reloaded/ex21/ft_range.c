/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 10:34:56 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/09 10:59:02 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		size;
	int		*array;
	int		i;

	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
