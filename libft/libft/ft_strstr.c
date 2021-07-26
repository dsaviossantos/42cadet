#include "libft.h"

const char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	n;

	n = ft_strlen(to_find);
	if (*to_find == '\0')
	{
		return (str);
	}
	if (*str == '\0')
	{
		return (NULL);
	}
	while (*str)
	{
		if (!ft_memcmp(str, to_find, n))
		{
			return (str);
		}
		str++;
	}
	return (0);
}
