/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 19:30:03 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/23 19:40:28 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
        char dest[50] = "Bom ";
        char src[] = "dia! Tudo certo?";
        
        printf("Antes: %s\n", dest);
        ft_strncat(dest, src, 4);  // Vai concatenar apenas "dia!"
        printf("Depois: %s\n", dest); // Esperado: "Bom dia!"
        return (0);
}
*/
