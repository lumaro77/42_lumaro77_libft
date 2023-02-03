/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:05:15 by lmartin2          #+#    #+#             */
/*   Updated: 2022/04/04 13:09:14 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		++str;
	sign = 1 - 2 * (*str == '-');
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
		res = res * 10 + sign * (*str++ - '0');
	return (res);
}
