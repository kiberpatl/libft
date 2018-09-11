/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaniel <mdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 17:12:44 by mdaniel           #+#    #+#             */
/*   Updated: 2018/09/11 18:45:09 by mdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ls;
	t_list	*new;
	t_list	*ls2;

	if (lst == NULL)
		return (NULL);
	ls2 = f(lst);
	ls = ft_lstnew(ls2->content, ls2->content_size);
	if (ls == NULL)
		return (NULL);
	new = ls;
	lst = lst->next;
	while (lst)
	{
		ls2 = f(lst);
		ls->next = ft_lstnew(ls2->content, ls2->content_size);
		if (ls->next == NULL)
			return (NULL);
		lst = lst->next;
		ls = ls->next;
	}
	return (new);
}
