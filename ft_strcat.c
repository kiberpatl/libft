/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:56:34 by ardenis           #+#    #+#             */
/*   Updated: 2018/08/31 15:31:54 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int term;
	int	i;

	term = 0;
	i = 0;
	while (s1[term])
		term++;
	while (s2[i])
	{
		s1[term] = s2[i];
		i++;
		term++;
	}
	s1[term] = '\0';
	return (s1);
}
