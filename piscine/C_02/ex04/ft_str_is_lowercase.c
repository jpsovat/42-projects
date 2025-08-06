/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 16:55:23 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/22 17:12:57 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	str2[] = "joao pedro";
	char	str3[] = "joaopedro";
	char	str4[] = "jo4opedro";


	printf("The string is: %s . Return: %d\n", str1, ft_str_is_lowercase(str1));
	printf("The string is: %s . Return: %d\n", str2, ft_str_is_lowercase(str2));
	printf("The string is: %s . Return: %d\n", str3, ft_str_is_lowercase(str3));
	printf("The string is: %s . Return: %d\n", str4, ft_str_is_lowercase(str4));
	
	return (0);
}
*/
