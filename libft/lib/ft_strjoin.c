#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;

	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	while (*s1)
	{
		*dest++ = *s1++;
	}
	while (*s2)
	{
		*dest++ = *s2++;
	}
	return (dest - len);
}
