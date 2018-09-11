/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:31:17 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/09 21:20:24 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		x1;
	int		x2;

	x1 = 0;
	x2 = 0;
	i = 0;
	if (!s)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[x1] == ' ' || s[x1] == '\n' || s[x1] == '\t')
		x1++;
	while (s[x2] != '\0')
		x2++;
	x2--;
	while (s[x2] == ' ' || s[x2] == '\n' || s[x2] == '\t')
		x2--;
	while (x1 <= x2)
		str[i++] = s[x1++];
	str[i] = '\0';
	return (str);
}
