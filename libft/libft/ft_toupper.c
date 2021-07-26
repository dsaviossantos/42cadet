#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 97 && c <= 122)
		{
			return (c - 32);
		}
		else
		{
			return (c);
		}
	}
	return (0);
}
