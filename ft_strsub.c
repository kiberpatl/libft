/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 20:11:27 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/11 20:12:34 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			i;

	str = NULL;
	if (s)
	{
		str = (char *)malloc(sizeof(char) * (len + 1));
		if (str)
		{
			i = 0;
			while (i < len)
			{
				str[i] = s[start];
				start++;
				i++;
			}
			str[i] = '\0';
		}
		return (str);
	}
	return (str);
}
