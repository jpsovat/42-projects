/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:21:07 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/21 19:23:45 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	sorted;

	sorted = 0;
	while (sorted == 0)
	{
		sorted = 1;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				sorted = 0;
			}
			i++;
		}
	}
}
/*
#include <stdio.h>

void	print_array(int *tab, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		printf("%d ", tab[j]);
		j++;
	}
	printf("\n");
}

int	main(void)
{
	int	tab[] = {10, 2, 13, 4, 5};
	int	size;

	size = 5;
	printf("Antes da ordenacao: ");
	print_array(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Depois da ordenacao: ");
	print_array(tab, size);

	return (0);
}
*/
