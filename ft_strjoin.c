/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:37:38 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/25 12:50:16 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)ft_calloc(sizeof(char), (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	ft_memcpy((void *)str, (void *)s1, s1_len);
	ft_memcpy((void *)(str + s1_len), (void *)(s2), s2_len);
	return (str);
}
