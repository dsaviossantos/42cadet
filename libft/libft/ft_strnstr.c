#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_needle;

	i = 0;
	j = 0;
	size_needle = ft_strlen(needle);
	if (size_needle == 0)
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			j++;
		if (j == size_needle)
			return ((char *)&haystack[i]);
		j = 0;
		i++;
	}
	return (NULL);
}
