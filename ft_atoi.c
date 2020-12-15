/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:54:02 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/28 17:35:56 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_zn(int zn)
{
	if (zn == -1)
		return (0);
	else
		return (-1);
}

int			ft_atoi(const char *str)
{
	int		zn;
	size_t	k;

	k = 0;
	zn = 1;
	while ((((*str > 8) && (*str < 14)) || (*str == 32)) && *str != '\0')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		zn = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str != '\0')
	{
		k = k * 10 + (*str - 48);
		str++;
	}
	if (k > k * 10)
		return (ft_atoi_zn(zn));
	str++;
	return (k * zn);
}
