#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
			 const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (dstsize > 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
