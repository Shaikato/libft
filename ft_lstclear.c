/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: randre <randre@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:29:25 by randre            #+#    #+#             */
/*   Updated: 2023/09/19 19:29:25 by randre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *buff;

	if (!lst)
		return ;
	while (*lst)
	{
		buff = *lst;
		*lst = *lst->next
		del(lst->content);
		free(lst->content);
	}
}