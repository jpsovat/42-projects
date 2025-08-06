/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 15:44:12 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/31 17:29:35 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	temp;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	temp = min;
	i = 0;
	while (temp < max)
	{
		(*range)[i] = temp;
		i++;
		temp++;
	}
	return (max - min);
}
/*
#include <stdio.h>
int	main()
{
	int	*array;
	int	max = 6;
	int	min = 0;

	printf("%d\n", ft_ultimate_range(&array, min, max));

	return(0);

}
*/
