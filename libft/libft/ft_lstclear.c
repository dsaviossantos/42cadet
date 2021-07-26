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
