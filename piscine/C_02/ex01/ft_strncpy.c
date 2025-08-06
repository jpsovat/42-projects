/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:14:11 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/21 21:06:50 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "42Porto";
	char	dest1[10];
	char	dest2[10];
	char	dest3[10];

	ft_strncpy(dest1, src, 4);
	ft_strncpy(dest2, src, 7);
	ft_strncpy(dest3, src, 10);

	printf("src : %s\n", src);
	printf("n = 4 : %s\n", dest1);
	printf("n = 7 : %s\n", dest2);
	printf("n = 10 : %s\n", dest3);

	return (0);
}
*/
