#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
			 const char *restrict src, size_t dstsize)
{
	int		dst_len;
	int		src_len;
	size_t	offset;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	offset = dst_len;
	while (dst[offset] != '\0' && dstsize > 0)
	{
		if (offset == dstsize)
		{
			offset--;
			break ;
		}
		dst[offset] = src[src_len];
		offset++;
		src_len++;
	}
	dst[offset] = '\0';
	return (offset);
}
