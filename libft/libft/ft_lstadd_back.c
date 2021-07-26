#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *lst;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp1 = new;
		tmp->next = tmp1;
	}
	else
		*lst = new;
}
