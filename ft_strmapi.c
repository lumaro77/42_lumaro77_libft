/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:50:14 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 12:44:10 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	if (!s)
		return (NULL);
	str = (char *)ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i])
		str[i] = f(i, s[i]);
	return (str);
}
