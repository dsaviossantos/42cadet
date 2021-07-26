#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (dst == NULL && src == NULL)
	{
		return (0);
	}
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
