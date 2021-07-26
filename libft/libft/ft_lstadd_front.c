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
