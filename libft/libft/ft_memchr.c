#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ps;
	size_t				i;

	ps = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ps[i] == (unsigned char)c)
			return (ps + i);
		else
			i++;
	}
	return (NULL);
}
