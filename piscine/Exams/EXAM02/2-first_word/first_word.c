/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:42:26 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/31 21:10:40 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;

	while (argv[1][i] == ' ' || argv[1][i] == '\t')
	{
		i++;
	}

	while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' )
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);	
}
