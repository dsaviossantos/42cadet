#include "libft.h"

char	*ft_strchr(const char * string, int c)
{
	while (*string)
	{
		if (*string == (char)c)
		{
			return ((char *)string);
		}
	}
	return (NULL);
}