/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 15:33:45 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/04 19:44:10 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int	term;
	int	i;

	term = 0;
	i = 0;
	while (s1[term])
		term++;
	while (s2[i] && (size_t)i < n)
	{
		s1[term] = s2[i];
		i++;
		term++;
	}
	s1[term] = '\0';
	return (s1);
}
