/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsovat-d <jsovat-d@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 08:30:00 by jsovat-d          #+#    #+#             */
/*   Updated: 2025/10/09 11:44:56 by jsovat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void set_point(t_point *point)
 {
 	point->x = 42;
 	point->y = 21;
 }

 int	main(void)
 {
 	t_point	point;
	
 	set_point(&point);
	return (0);
 }
