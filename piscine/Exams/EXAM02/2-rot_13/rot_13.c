/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:22:56 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/08/01 10:40:46 by jsovat-d         ###   ########.fr       */
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
		if ((argv[1][j] >= 'a' && argv[1][j] <= 'm') || (argv[1][j] >= 'A' && argv[1][j] <= 'M'))
		{
			letter = argv[1][j] + 13;
		}
		else if ((argv[1][j] >= 'n' && argv[1][j] <= 'z') || (argv[1][j] >= 'N' && argv[1][j] <= 'Z'))
		{
 			letter = argv[1][j] - 13;
 		}
		write(1, &letter, 1);
		j++;
	}
		write(1, "\n", 1);
		return (0);
}
