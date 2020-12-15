/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 16:09:23 by sdonya            #+#    #+#             */
/*   Updated: 2019/10/18 18:51:05 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mas;

	if (size + 1 == 0)
		return (NULL);
	mas = ft_memalloc((size + 1));
	if (!mas)
		return (NULL);
	ft_bzero(mas, size);
	mas[size] = '\0';
	return (mas);
}
