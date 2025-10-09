/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 08:30:00 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/09 08:50:00 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("Comparando \"Joao\" e \"Joao\" → %d\n", ft_strcmp("Joao", "Joao"));
	printf("Comparando \"ABCD\" e \"ABBD\" → %d\n", ft_strcmp("ABCD", "ABBD"));
	printf("Comparando \"ABBD\" e \"ABCD\" → %d\n", ft_strcmp("ABBD", "ABCD"));
	printf("Comparando \"42\" e \"420\"   → %d\n", ft_strcmp("42", "420"));
	printf("Comparando \"420\" e \"42\"   → %d\n", ft_strcmp("420", "42"));
	return (0);
}
