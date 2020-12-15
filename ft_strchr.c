/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 19:58:15 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/19 17:16:21 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*so;

	so = (char *)s;
	i = 0;
	while (so[i] != c && so[i] != '\0')
		i++;
	if (so[i] == c)
		return (&so[i]);
	else
		return (NULL);
}
