/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 17:52:09 by ardenis           #+#    #+#             */
/*   Updated: 2018/08/31 18:17:36 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	slen;
	size_t	len;

	len = 0;
	slen = ft_strlen(src);
	while (*dst && size > 0)
	{
		len++;
		dst++;
		size--;
	}
	while (*src && size > 1)
	{
		size--;
		*dst = *src;
		dst++;
		src++;
		if (size == 1 || *src == 0)
			*dst = '\0';
	}
	return (slen + len);
}
