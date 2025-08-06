/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:13:19 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/22 18:22:01 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "Joao Pedro";
	char	str2[] = "JOAO PEDRO";
	char	str3[] = "JOAOPEDRO";
	char	str4[] = "JO4AOP3DRO:";


	printf("The string is: %s . Return: %d\n", str1, ft_str_is_uppercase(str1));
	printf("The string is: %s . Return: %d\n", str2, ft_str_is_uppercase(str2));
	printf("The string is: %s . Return: %d\n", str3, ft_str_is_uppercase(str3));
	printf("The string is: %s . Return: %d\n", str4, ft_str_is_uppercase(str4));
	
	return (0);
}
*/
