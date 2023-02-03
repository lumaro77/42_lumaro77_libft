/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:02:27 by lmartin2          #+#    #+#             */
/*   Updated: 2022/02/23 16:47:51 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	if (*s == (char)c)
		ptr = (char *)s;
	while (*(++s))
		if (*s == (char)c)
			ptr = (char *)s;
	if (ptr)
		return (ptr);
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}
