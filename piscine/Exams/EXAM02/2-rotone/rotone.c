/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:42:08 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/08/01 10:51:45 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;
	char	letter;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	j = 0;
	while (argv[1][j])
	{
		letter = argv[1][j];
	 	if (argv[1][j] == 'z')
		{
			letter = 'a';
		}
		else if (argv[1][j] == 'Z')
		{
			letter = 'A';
		}
		else if ((argv[1][j] >= 'a' && argv[1][j] <= 'y') || (argv[1][j] >= 'A' && argv[1][j] <= 'Y'))
		{
			letter += 1;
		}
		write(1, &letter, 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
