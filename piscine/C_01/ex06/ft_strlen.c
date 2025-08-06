/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:48:41 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/21 17:12:43 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "42Porto";
	int	tamanho;

	tamanho = ft_strlen(str);
	printf("Tamanho da string: %d\n", tamanho);

	return (0);
}
*/
