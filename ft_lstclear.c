/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdurmaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 15:52:43 by gdurmaz           #+#    #+#             */
/*   Updated: 2023/05/14 15:53:21 by gdurmaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;
	t_list	*tmp;

	t = *lst;
	while (t)
	{
		tmp = t->next;
		ft_lstdelone(t, del);
		t = tmp;
	}
	*lst = NULL;
}
