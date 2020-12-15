/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:53:18 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 15:21:16 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*m;

	if (!s)
		return (NULL);
	m = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!m)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		m[i] = f(s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}
