/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:32:43 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/06 19:52:26 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_strdel(char **as)
{
	if (!as)
		return ;
	if (*as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}