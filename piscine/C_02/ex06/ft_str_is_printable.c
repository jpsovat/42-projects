/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:12:51 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/22 19:23:08 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char	str2[] = "";
	char	str3[] = "    ";
	char	str4[] = "Olá\nmundo";


	printf("The string is: %s . Return: %d\n", str1, ft_str_is_printable(str1));
	printf("The string is: %s . Return: %d\n", str2, ft_str_is_printable(str2));
	printf("The string is: %s . Return: %d\n", str3, ft_str_is_printable(str3));
	printf("The string is: %s . Return: %d\n", str4, ft_str_is_printable(str4));
	
	return (0);
}
*/
