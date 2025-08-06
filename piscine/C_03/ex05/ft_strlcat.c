/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:39:38 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/24 14:27:12 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Funcao auxiliar para ver o tamanho da src e dest
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	buffer1[20] = "Oi ";
	char	buffer2[20] = "Oi ";
	char	buffer3[20] = "Oi ";

	// Vai precisar de 7 bytes
	char	src[] = "mundo!";

	// Teste 1: Cabe tudo (buffer grande)
	unsigned int	ret1 = ft_strlcat(buffer1, src, 20);
	printf("Teste 1 - dest: \"%s\", retorno: %u\n", buffer1, ret1);

	// Teste 2: Cabe parcialmente
	unsigned int	ret2 = ft_strlcat(buffer2, src, 8);
	printf("Teste 2 - dest: \"%s\", retorno: %u\n", buffer2, ret2);

	// Teste 3: Não cabe nada
	buffer3[3] = '\0'; // força um dest com 3 letras
	unsigned int	ret3 = ft_strlcat(buffer3, src, 3);
	printf("Teste 3 - dest: \"%s\", retorno: %u\n", buffer3, ret3);

	return (0);
}
*/
