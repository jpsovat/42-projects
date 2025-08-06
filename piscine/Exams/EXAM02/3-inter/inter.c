/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:53:17 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/08/01 11:25:35 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (c == str[i])
			return (1);
		i++;
	
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				if (check_doubles(argv[1], argv[1][i], i) == 0)
				{
					write(1, &argv[1][i], 1);
					break;
				}	
			}
			j++;
		}	
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
