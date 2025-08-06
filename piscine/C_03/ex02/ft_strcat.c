/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:34:14 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/23 19:27:46 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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

int	main(void)
{
	char dest[100] = "Bom ";//dest tenha espaço suficiente para receber src + 1
	char src[] = "dia!";	//o comp aloca espaco apenas bytes da string escrita

	printf("Antes: %s\n", dest);
	ft_strcat(dest, src);
	printf("Depois: %s\n", dest);

	return (0);
}
*/
