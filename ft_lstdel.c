/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdonya <sdonya@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:35:15 by sdonya            #+#    #+#             */
/*   Updated: 2019/11/26 15:01:35 by sdonya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*new;
	t_list	*nex;

	if (alst && *alst)
	{
		new = *alst;
		while (new)
		{
			nex = new->next;
			del(new->content, new->content_size);
			free(new);
			new = nex;
		}
		*alst = NULL;
	}
}
