/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ardenis <ardenis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 20:10:22 by ardenis           #+#    #+#             */
/*   Updated: 2018/09/11 20:10:24 by ardenis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	ans;

	ans = 0;
	while (*s)
	{
		if (*s != c)
		{
			ans++;
			while (*s && *s != c)
				s++;
		}
		while (*s && *s == c)
			s++;
	}
	return (ans);
}

static char	*make_word(char const *s, char c)
{
	char	*ans;
	int		i;
	int		j;
	int		len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	j = i;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	ans = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	len = j + len;
	while (j < len)
		ans[i++] = s[j++];
	ans[i] = '\0';
	return (ans);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		i;
	int		len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	res = (char **)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = (char *)malloc(sizeof(char) * ft_strlen(make_word(s, c) + 1));
		res[i] = make_word(s, c);
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
			s++;
		i++;
	}
	res[i] = NULL;
	return (res);
}
