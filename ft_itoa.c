/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 15:39:15 by sdonya            #+#    #+#             */
/*   Updated: 2019/09/25 15:34:34 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_min_itoa(int n)
{
	char	*mas;
	int		i;

	i = 9;
	if (!(mas = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	mas[0] = '-';
	mas[10] = '8';
	mas[11] = '\0';
	n = (n / 10) * -1;
	while (i > 0)
	{
		mas[i] = n % 10 + 48;
		i--;
		n /= 10;
	}
	return (mas);
}

static int	ft_len_itoa(int n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*mas;
	int		len;

	if (n == -2147483648)
		return (ft_min_itoa(n));
	len = ft_len_itoa(n);
	if (n == 0)
		len++;
	if (!(mas = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	mas[len] = '\0';
	len--;
	if (n < 0)
	{
		n *= -1;
		mas[0] = '-';
	}
	else if (n == 0)
		mas[0] = '0';
	while (n > 0)
	{
		mas[len--] = n % 10 + 48;
		n /= 10;
	}
	return (mas);
}
