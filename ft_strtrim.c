/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 12:24:32 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/24 15:30:39 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] && (s[i] == ' ' || s[i] == ',' || s[i] == '\n'
	|| s[i] == '\t'))
		i++;
	len = ft_strlen(s) - 1;
	if (i == len + 1)
		return (ft_strnew(1));
	while (s[len] && (s[len] == ' ' || s[len] == ',' || s[len] == '\n'
	|| s[len] == '\t'))
		len--;
	return (ft_strsub(s, i, len - i + 1));
}
