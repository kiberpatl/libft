/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:29:14 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/11 18:29:16 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			f;
	long int	n;

	n = 0;
	while (ft_isspace(*str))
		str++;
	f = *str == '-';
	if ((*str == '-') || (*str == '+'))
		str++;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		if (n > 2147483647 && f == 0)
			return (-1);
		if (n > 2147483648 && f == 1)
			return (0);
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n * (1 + -2 * f));
}
