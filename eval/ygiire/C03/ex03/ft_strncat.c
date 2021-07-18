char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	yo;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	yo = 0;
	while (src[i] != '\0' && i < nb)
	{
		src[i] == dest[yo];
		yo++;
		i++;
	}
	dest[yo] = '\0';
	return (dest);
}
