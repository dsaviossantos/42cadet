#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		l;
	char	*str;

	l = 0;
	while (s1[l])
		l++;
	str = malloc(sizeof(*str) * (l + 1));
	if (str == NULL)
		return (0);
	i = 0;
	while (i < l)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
