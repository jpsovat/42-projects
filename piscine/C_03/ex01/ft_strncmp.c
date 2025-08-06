/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:26:19 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/23 17:22:44 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char *a = "abc";
	char *b = "abd";
	char *c = "abc";
	char *s1 = "éxito";
	char *s2 = "êxito";

	// Testes normais
	printf("%s e %s (n = 3): %d\n", a, b, ft_strncmp(a, b, 3));
	printf("%s e %s (n = 2): %d\n", a, b, ft_strncmp(a, b, 2));
	printf("%s e %s (n = 3): %d\n", a, c, ft_strncmp(a, c, 3));

	// Teste com acentos (comportamento pode variar se não usar cast)
	printf("%s e %s (n = 1): %d\n", s1, s2, ft_strncmp(s1, s2, 1));

	// Mostrando diferença com e sem cast manual
	unsigned char ch1 = 233; // ASCII 233
	unsigned char ch2 = 'e'; // ASCII 101
	printf("\nSem cast: %d\n", ch1 - ch2);
	printf("Com cast: %d\n", (unsigned char)ch1 - (unsigned char)ch2);
	printf("%s e %s (n = 2): %d\n", s1, s2, ft_strncmp(s1, s2, 2));

	return (0);
}
*/
