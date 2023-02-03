/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin2 <lmartin2@student.42bcn.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:13:18 by lmartin2          #+#    #+#             */
/*   Updated: 2023/02/03 19:11:25 by lmartin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstmap;
	t_list	*item;
	void	*my_content;

	if (!lst)
		return (NULL);
	lstmap = NULL;
	while (lst)
	{
		my_content = f(lst->content);
		item = ft_lstnew(my_content);
		if (!item)
		{
			if (my_content)
				free(my_content);
			ft_lstclear(&lstmap, del);
			return (NULL);
		}
		ft_lstadd_back(&lstmap, item);
		lst = lst->next;
	}
	return (lstmap);
}
