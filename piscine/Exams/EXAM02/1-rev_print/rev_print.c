/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <[jsovat-d@student.42porto.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:32:17 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/07/31 20:40:55 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print (char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		write(1,&str[i], 1);
		i--;
	}
	return (str);
}
#include <stdio.h>
int	main()
{
	char	str[] = "ABCDE";

	ft_rev_print(str);

	return (0);
}
