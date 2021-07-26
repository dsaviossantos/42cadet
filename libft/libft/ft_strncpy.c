char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	schet;

	schet = 0;
	while (schet < n && src[schet] != '\0')
	{
		dest[schet] = src[schet];
		schet++;
	}
	while (schet < n)
	{
		dest[schet] = '\0';
		schet++;
	}
	return (dest);
}
