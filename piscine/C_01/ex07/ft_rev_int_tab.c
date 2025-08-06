/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:44:59 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/21 18:17:39 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
#include <stdio.h>

// Funcao auxiliar para imprimir o array
void	print_array(int *tab, int size)
{
	int j;

	j = 0;
	while (j < size)
	{
		printf("%d ", tab[j]);
		j++;
	}
	printf("\n");
}

// Programa principal
int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;

	printf("Array original: ");
	print_array(tab, size);

	ft_rev_int_tab(tab, size);

	printf("Array invetido: ");
	print_array(tab, size);

	return (0);
}
*/
