/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsavio-d <dsavio-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:20:45 by dsavio-d          #+#    #+#             */
/*   Updated: 2021/08/16 20:20:46 by dsavio-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function:		void		ft_lstadd_front
**
** Description:		Adds the element ’new’ at the beginning of the list.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = new;
		tmp->next = *lst;
		*lst = tmp;
	}
	else
		*lst = new;
}
