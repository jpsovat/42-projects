/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 09:30:48 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/03 10:21:59 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	printf("sqrt of 4 = %d\n", ft_sqrt(4));   // 2
	printf("sqrt of 9  = %d\n", ft_sqrt(9));   // 3
	printf("sqrt of 10000 = %d\n", ft_sqrt(10000));   // 100
	printf("sqrt of 100000000 = %d\n", ft_sqrt(100000000));   // 10000
	return (0);
}
