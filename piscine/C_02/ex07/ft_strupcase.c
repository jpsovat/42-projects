/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:37:53 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/22 19:54:19 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "hello world";
	char str2[] = "42porto!";
	char str3[] = "MiXeD CaSe";
	char str4[] = ""; // string vazia

	printf("Original: %s\n", str1);
	printf("Maiúsculo: %s\n\n", ft_strupcase(str1));

	printf("Original: %s\n", str2);
	printf("Maiúsculo: %s\n\n", ft_strupcase(str2));

	printf("Original: %s\n", str3);
	printf("Maiúsculo: %s\n\n", ft_strupcase(str3));

	printf("Original: \"%s\"\n", str4);
	printf("Maiúsculo: \"%s\"\n", ft_strupcase(str4));

	return (0);
}
*/
