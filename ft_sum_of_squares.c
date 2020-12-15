/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum_of_squares.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:32:22 by sdonya            #+#    #+#             */
/*   Updated: 2019/11/26 16:40:33 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sum_of_squares(size_t first, size_t end)
{
	size_t	sum;

	sum = 0;
	while (end >= first)
	{
		sum = first * first + sum;
		first++;
	}
	return (sum);
}
