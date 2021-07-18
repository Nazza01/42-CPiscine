char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	yo;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	yo = 0;
	while (src[i] != '\0')
	{
		dest[yo] = src[i];
		yo++;
		i++;
	}
	dest[yo] = '\0';
	return (dest);
}
