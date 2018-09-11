/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 19:21:29 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/04 19:39:03 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		slen;

	if (!*little)
		return ((char *)big);
	slen = 0;
	while (*big && (size_t)slen < len)
	{
		i = 0;
		while (big[i] == little[i])
		{
			if ((size_t)(slen + i) >= len)
				return (NULL);
			i++;
			if (little[i] == '\0')
				return ((char *)big);
		}
		big++;
		slen++;
	}
	return (NULL);
}
