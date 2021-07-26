char	*ft_strcpy(char *dest, char *src)
{
	int	it;
	int	flag;

	flag = 0;
	it = 0;
	while (flag != 1)
	{
		if (src[it])
		{
			dest[it] = src[it];
			it++;
		}
		else
		{
			flag = 1;
		}
		dest[it] = '\0';
	}
	return (dest);
}
