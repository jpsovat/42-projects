/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:56:48 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/22 20:00:34 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "HELLO WORLD";
	char str2[] = "42PORTO!";
	char str3[] = "MiXeD CaSe";
	char str4[] = "";

	printf("Original: %s\n", str1);
	printf("Maiúsculo: %s\n\n", ft_strlowcase(str1));

	printf("Original: %s\n", str2);
	printf("Maiúsculo: %s\n\n", ft_strlowcase(str2));

	printf("Original: %s\n", str3);
	printf("Maiúsculo: %s\n\n", ft_strlowcase(str3));

	printf("Original: \"%s\"\n", str4);
	printf("Maiúsculo: \"%s\"\n", ft_strlowcase(str4));

	return (0);
}
*/
