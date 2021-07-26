#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	c;
	unsigned char	*ptr;

	c = '\0';
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = c;
		ptr++;
		n--;
	}
}
