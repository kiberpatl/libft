/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaniel <mdaniel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 16:37:36 by mdaniel           #+#    #+#             */
/*   Updated: 2018/09/11 18:17:47 by mdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *fuc;

	if (lst && f)
	{
		fuc = lst;
		while (fuc)
		{
			f(fuc);
			fuc = fuc->next;
		}
	}
}
