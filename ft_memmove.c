/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:23:09 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 14:49:04 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*de;
	unsigned char	*s;

	de = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		if (dst < src)
			de[i] = s[i];
		i++;
	}
	i--;
	if (dst > src)
	{
		while (i < len)
		{
			de[i] = s[i];
			i--;
		}
	}
	return (dst);
}
