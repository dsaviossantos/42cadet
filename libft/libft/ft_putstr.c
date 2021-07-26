#include "libft.h"

void	ft_putstr(char *str)
{
	int	it;

	it = 0;
	while (str[it] != '\0')
	{
		write(1, &str[it], 1);
		it++;
	}
}
