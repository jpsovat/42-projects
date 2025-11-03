/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 09:29:44 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/09/19 09:32:30 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_isprint - Checks if a character is an alphabetic letter.
 * @c: The character to check.
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise.
 */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
