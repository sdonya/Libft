/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:11:13 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 14:46:51 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t	i;
	char	*des;
	char	*sric;

	i = 0;
	if (!num || dst == src)
		return (dst);
	des = (char *)dst;
	sric = (char *)src;
	while (i < num)
	{
		des[i] = sric[i];
		i++;
	}
	return (des);
}
