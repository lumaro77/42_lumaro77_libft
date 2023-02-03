/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:00:47 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:41:45 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcsize;

	srcsize = ft_strlen(src);
	if (size == 0)
		return (srcsize);
	if (srcsize + 1 < size)
		ft_memcpy((void *)dst, (void *)src, srcsize + 1);
	else
	{
		ft_memcpy((void *)dst, (void *)src, size - 1);
		*(dst + size - 1) = '\0';
	}
	return (srcsize);
}
