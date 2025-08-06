/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:52:00 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/30 14:27:50 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	j;
	int	size;
	int	*array_int;
	int	temp;

	if (min >= max)
		return (NULL);
	array_int = (int *)malloc(sizeof(int) * (max - min));
	temp = min;
	j = 0;
	while (temp < max)
	{
		array_int[j] = temp;
		j++;
		temp++;
	}
	return (array_int);
}
