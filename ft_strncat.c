/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:43:49 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 15:00:38 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t b;

	i = 0;
	b = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0' && b < n)
	{
		s1[i] = s2[b];
		i++;
		b++;
	}
	s1[i] = '\0';
	return (s1);
}
