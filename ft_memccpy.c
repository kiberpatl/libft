/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 20:55:49 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/04 19:51:17 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)d;
	source = (unsigned char *)s;
	d = destination;
	while (n--)
	{
		*destination = *source;
		if (*destination == (unsigned char)c)
		{
			destination++;
			return (destination);
		}
		destination++;
		source++;
	}
	return (NULL);
}
