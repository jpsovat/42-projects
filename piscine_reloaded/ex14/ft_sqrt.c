/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 09:42:37 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/03 10:21:53 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		low;
	int		high;
	int		mid;
	long	sqrt;

	if (nb <= 0)
		return (0);
	low = 1;
	high = nb;
	while (low <= high)
	{
		mid = (low + high) / 2;
		sqrt = (long)mid * (long)mid;
		if (sqrt == nb)
			return (mid);
		else if (sqrt < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}
