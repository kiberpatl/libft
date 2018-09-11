/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:16:51 by mdaniel           #+#    #+#             */
/*   Updated: 2018/09/11 20:40:55 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_btree	*ft_btree_create_node(void *item)
{
	t_btree *part;

	part = (t_btree*)malloc(sizeof(t_btree));
	if (part)
	{
		part->item = item;
		part->left = 0;
		part->right = 0;
	}
	return (part);
}
