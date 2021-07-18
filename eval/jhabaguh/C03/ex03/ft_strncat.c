char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	d;
	unsigned int	s;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (s < n)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
