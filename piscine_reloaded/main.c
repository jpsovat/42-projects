/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 08:30:00 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/09 10:31:41 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*original = "Piscine Reloaded - 42 Porto";
	char	*copy;

	copy = ft_strdup(original);
	if (copy == NULL)
	{
		printf("Erro: malloc falhou!\n");
		return (1);
	}

	printf("Original: %s\n", original);
	printf("Cópia   : %s\n", copy);

	// Confirmar que são strings diferentes na memória
	if (original == copy)
		printf("❌ ERRO: ponteiros iguais (não copiou)\n");
	else
		printf("✅ Ponteiros diferentes (cópia feita com sucesso)\n");

	free(copy);
	return (0);
}
