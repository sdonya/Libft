/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:30:00 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/28 14:58:57 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (!*needle)
		return ((char *)haystack);
	a = 0;
	while (haystack[a] != '\0' && a < len)
	{
		if (haystack[a] == needle[0])
		{
			b = 1;
			while (needle[b] != '\0' && haystack[a + b] == needle[b]
			&& a + b < len)
				b++;
			if (needle[b] == '\0')
				return ((char *)&haystack[a]);
		}
		a++;
	}
	return (NULL);
}
