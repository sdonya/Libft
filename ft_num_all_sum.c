/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_all_sum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:16:21 by sdonya            #+#    #+#             */
/*   Updated: 2019/11/26 16:40:12 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_num_all_sum(size_t first, size_t end)
{
	size_t sum;

	sum = 0;
	if (first <= end)
	{
		while (first <= end)
		{
			sum += first;
			first++;
		}
	}
	else
	{
		while (end <= first)
		{
			sum += first;
			end++;
		}
	}
	return (sum);
}
