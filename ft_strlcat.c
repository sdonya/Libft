/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:52:56 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 21:13:57 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	de;
	size_t	sr;

	de = ft_strlen(dst);
	sr = ft_strlen(src);
	if (de + 1 > size)
		return (sr + size);
	i = 0;
	while (i < (size - de - 1) && src[i] != '\0')
	{
		dst[de + i] = src[i];
		i++;
	}
	dst[de + i] = '\0';
	return (sr + de);
}
