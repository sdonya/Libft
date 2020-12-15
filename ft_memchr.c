/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:21:59 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/20 20:59:06 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sor;

	sor = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sor[i] == (unsigned char)c)
			return (sor + i);
		i++;
	}
	return (NULL);
}
