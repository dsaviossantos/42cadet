#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	j;
	size_t	i;

	i = start;
	if (i >= ft_strlen(s))
	{
		p = (char *)malloc(sizeof(char));
		if (!(p))
			return (NULL);
		*p = '\0';
		return (p);
	}
	j = 0;
	while (s[i++] != '\0' && j < len)
		j++;
	p = (char *)malloc(j * sizeof(char) + 1);
	if (!(p))
		return (NULL);
	j = 0;
	while (s[start] != '\0' && j < len)
		p[j++] = s[start++];
	p[j] = '\0';
	return (p);
}
