#include "libft.h"

/*
** Function:		int ft_lstsize
**
** Description:		Counts the number of elements in a list.
*/

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		count;

	count = 0;
	tmp = lst;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
