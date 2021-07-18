char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		src[i] = dest[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
