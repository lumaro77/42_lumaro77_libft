/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:40:50 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/25 17:47:43 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p1;
	char	*p2;

	if (!s1)
		return (NULL);
	p1 = (char *)s1;
	while (*p1 && ft_strchr(set, *p1))
		p1++;
	p2 = (char *)s1 + ft_strlen(s1);
	while (p2 > p1 && ft_strchr(set, *p2))
		p2--;
	return (ft_substr(s1, (unsigned int)(p1 - s1), (size_t)(p2 - p1 + 1)));
}
