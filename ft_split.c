/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 13:04:39 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:57:17 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(char *s, char c)
{
	size_t	num;

	num = 0;
	if (*s && *s != c)
	{
		num++;
		s++;
	}
	while (*s)
	{
		if (*s != c && *(s - 1) == c)
			num++;
		s++;
	}	
	return (num);
}

static char	*getword(char *s, char c, size_t item)
{
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	end = 0;
	i = 0;
	item++;
	while (item--)
	{
		while (s[i] == c)
			start = ++i;
		while (s[i] && s[i] != c)
			end = ++i;
	}
	return (ft_substr(s, start, end - start));
}

char	**ft_split(char const *s, char c)
{
	size_t	num;
	char	**str;
	size_t	i;

	if (!s)
		return (NULL);
	num = countwords((char *)s, c);
	str = (char **)ft_calloc(sizeof(char *), num + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < num)
	{
		str[i] = getword((char *)s, c, i);
		if (!str[i])
		{
			while (i--)
				free (str[i]);
			free (str);
			return (NULL);
		}
	}
	return (str);
}
