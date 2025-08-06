/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:33:01 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/08/01 12:05:41 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	end;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (argv[1][i])
		i++;
	i -= 1;
	while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i--;
	if (i < 0)
	{
		write(1, "\n", 1);
		return (0);
	}
	end = i;
	while (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
		i--;
	i++;
	while (i <= end)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
