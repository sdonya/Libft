/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:10:42 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/20 19:37:46 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	m;

	i = 0;
	if (*needle == 0)
		return ((char *)&haystack[i]);
	while (haystack[i] != '\0')
	{
		m = 0;
		while (haystack[i + m] == needle[m] && needle[m] != '\0'
		&& haystack[i + m] != '\0')
			m++;
		if (m == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
