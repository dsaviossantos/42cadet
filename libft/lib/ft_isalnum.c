#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
