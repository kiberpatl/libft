/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 19:02:51 by ardenis           #+#    #+#             */
/*   Updated: 2018/08/31 19:19:11 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	i;

	if (!*little)
		return ((char *)big);
	while (*big)
	{
		i = 0;
		while (big[i] == little[i])
		{
			i++;
			if (little[i] == '\0')
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
