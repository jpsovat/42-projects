/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 10:21:10 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/25 10:52:36 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	char	c;
	int	pos;
	char	upper;

	c = 'z';
	pos = 0;
	while (c >= 'a')
	{
		if (pos % 2 == 0)
		{
			write(1, &c, 1);
		}
		else
		{
			upper = c - 32;
			write(1, &upper, 1);
		}
		pos++;
		c--;
	}
	write(1, "\n", 1);

	return(0);
}
