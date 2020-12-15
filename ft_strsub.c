/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:56:50 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 15:21:16 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*mas;
	size_t	i;

	i = 0;
	mas = (char *)malloc((len + 1) * sizeof(char));
	if (!mas || !s)
		return (NULL);
	while (i < len)
	{
		mas[i] = s[start];
		i++;
		start++;
	}
	mas[i] = '\0';
	return (mas);
}
