#include "libft.h"

static char	*fill_str(char *str, char *tmp, int start, int size_str)
{
	int	i;

	i = 0;
	str = (char *)malloc((sizeof(char) * (size_str - start)) + 1);
	if (!(str))
		return (NULL);
	while (start < size_str)
	{
		str[i++] = tmp[start];
		start++;
	}
	free(tmp);
	str[i] = '\0';
	return (str);
}

static int	ft_ischr_instr(char *str, char chr)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return (1);
		i++;
	}
	return (0);
}

char	*create_tmp_str(char *s1)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = (char *)malloc((ft_strlen(s1) * sizeof(char)) + 1);
	if (!(tmp))
		return (NULL);
	while (i < ft_strlen(s1))
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char	*returner(char *str, char *tmp)
{
	free(tmp);
	str = (char *)malloc(sizeof(char) * 1);
	if (!(str))
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	char	*str;
	char	*tmp;
	size_t	end_cut;
	size_t	end_i;

	if (!s1)
		return (NULL);
	end_cut = 0;
	i = 0;
	end_i = 0;
	str = NULL;
	tmp = create_tmp_str((char *)s1);
	if (!(tmp))
		return (NULL);
	while (ft_ischr_instr((char *)set, tmp[i]) == 1)
		i++;
	if (tmp[i] == '\0')
		return (returner(str, tmp));
	end_i = ft_strlen(tmp) - 1;
	while (ft_ischr_instr((char *)set, tmp[end_i--]))
		end_cut++;
	if (end_cut != 0)
		return (fill_str(str, tmp, i, ft_strlen(tmp) - end_cut));
	return (fill_str(str, tmp, i, ft_strlen(tmp)));
}
