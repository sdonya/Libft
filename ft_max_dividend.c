/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_dividend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 16:05:34 by sdonya            #+#    #+#             */
/*   Updated: 2019/11/26 16:39:44 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_max_dividend(size_t div, size_t num)
{
	size_t	max;
	size_t	i;

	i = div / 2;
	max = 1;
	while (i <= div)
	{
		if (i % num == 0)
			max = i;
		i++;
	}
	return (max);
}
