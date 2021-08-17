/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:20:53 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:20:54 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *lst;
	if (!tmp)
		return ;
	while (tmp)
	{
		tmp1 = tmp->next;
		(*del)(tmp->content);
		free(tmp);
		tmp = tmp1;
	}
	*lst = NULL;
}
