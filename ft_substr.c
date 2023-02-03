/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:59:15 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 13:09:41 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		return (ft_strdup(s + start));
	str = (char *)ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	str = (char *)ft_memcpy((void *)str, (void *)(s + start), len);
	return (str);
}
