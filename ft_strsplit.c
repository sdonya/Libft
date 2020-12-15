/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:22:10 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 18:56:11 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_strsplit_free(char **map, size_t i)
{
	while (i)
	{
		free(map[i]);
		i--;
	}
	free(map[0]);
	free(map);
	return (0);
}

static int		ft_strsplit_lines(size_t *j, size_t i, char c, char const *s)
{
	*j = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i] != c && s[i])
	{
		(*j)++;
		i++;
	}
	return (i);
}

static size_t	ft_strsplit_column(char const *s, char c)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			j++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**map;
	size_t	i;
	size_t	j;
	size_t	g;

	i = 0;
	if (!s)
		return (NULL);
	j = ft_strsplit_column(s, c);
	if (!(map = (char**)malloc((j + 1) * sizeof(char*))))
		return (NULL);
	g = 0;
	while (s[i])
	{
		i = ft_strsplit_lines(&j, i, c, s);
		if (s[i - 1] != c)
		{
			if (!(map[g++] = ft_strsub(s, i - j, j)))
				return (ft_strsplit_free(map, --g));
		}
	}
	map[g] = NULL;
	return (map);
}
