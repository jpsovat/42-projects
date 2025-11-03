/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 08:52:07 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/09/19 09:18:45 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_isdigit - Checks if a character is a digit from 0 to 9.
 * @c: The character to check.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
