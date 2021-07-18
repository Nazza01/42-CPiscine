unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != size)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
