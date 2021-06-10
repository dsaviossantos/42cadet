#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		str_len;
	char	*dest;

	str_len = len - start;
	dest = malloc(sizeof (char) * (str_len + 1));
	ft_strlcpy(dest, (s + start), str_len);
	return (dest);
}
