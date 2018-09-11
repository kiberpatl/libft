/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 22:52:55 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/03 20:53:00 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;

	i = 0;
	destination = (char *)dst;
	source = (char *)src;
	while (i < n)
	{
		*destination++ = *source++;
		i++;
	}
	return (dst);
}
