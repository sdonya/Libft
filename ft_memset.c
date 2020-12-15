/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:47:19 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 14:49:58 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*mem;
	size_t			n;

	n = 0;
	mem = (unsigned char *)b;
	while (len > n)
	{
		mem[n] = (unsigned char)c;
		n++;
	}
	return (mem);
}
