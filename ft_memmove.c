/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 18:37:18 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/04 22:05:13 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*sr;
	char	*ds;

	sr = (char *)src;
	ds = dst;
	i = 0;
	if (sr > ds)
	{
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	else
	{
		while ((int)(--len) >= 0)
		{
			ds[len] = sr[len];
		}
	}
	return (dst);
}
