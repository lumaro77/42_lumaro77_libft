/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:00:19 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:18:32 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!dst && !src)
		return (dst);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = -1;
	if (ptr_src < ptr_dst)
	{
		ptr_dst += (len - 1);
		ptr_src += (len - 1);
		while (len--)
			*ptr_dst-- = *ptr_src--;
	}
	else
		while (len--)
			*ptr_dst++ = *ptr_src++;
	return (dst);
}
