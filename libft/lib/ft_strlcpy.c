#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
			 const char *restrict src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (src[len] != '\0' && dstsize > 0)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (len);
}
