/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:54:40 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/06 15:08:02 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ar;

	if ((int)size >= 0)
	{
		ar = (void *)malloc(sizeof(void) * size);
		if (ar)
		{
			ft_bzero(ar, size);
			return (ar);
		}
	}
	return (NULL);
}
