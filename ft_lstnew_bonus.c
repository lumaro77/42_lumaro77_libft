/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:17:36 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:21 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*item;

	item = (t_list *)malloc(sizeof(t_list));
	if (!item)
		return (NULL);
	item->next = NULL;
	item->content = content;
	return (item);
}
