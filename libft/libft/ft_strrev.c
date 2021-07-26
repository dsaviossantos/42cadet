#include "libft.h"

char	*ft_strrev(char *str, int count, int sign)
{
	int		i;
	char	*str1;

	if (sign == 1)
	{
		i = 0;
		str1 = (char *)ft_calloc(count * sizeof(char) + 1, 1);
		if (!(str1))
			return (NULL);
		while (count - 1 >= 0)
			str1[i++] = str[--count];
	}
	else
	{
		i = 1;
		str1 = (char *)ft_calloc(count * sizeof(char) + 2, 1);
		if (!(str1))
			return (NULL);
		while (count - 1 >= 0)
			str1[i++] = str[--count];
		str1[0] = '-';
	}
	free(str);
	return (str1);
}
