/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:14 by lmartin2          #+#    #+#             */
/*   Updated: 2022/03/11 11:03:12 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	intlen(int num)
{
	size_t	len;

	if (num == 0 || num == -0)
		return (1);
	len = 0 + 1 * (num < 0);
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t		len;
	long int	nbr;
	char		*str;

	len = intlen(n);
	str = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!str)
		return (NULL);
	nbr = (long int)n - (n < 0) * 2 * (long int)n;
	while (len--)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}
