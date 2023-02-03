/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:04:49 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:57:11 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_lit;
	size_t	i;

	if (!*little)
		return ((char *)big);
	len_lit = ft_strlen(little);
	i = -1;
	while (++i < len && big[i])
		if (len - i >= len_lit && !ft_strncmp(&big[i], little, len_lit))
			return ((char *)&big[i]);
	return (NULL);
}
