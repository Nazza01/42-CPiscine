unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	in;
	unsigned int	out;

	in = 0;
	out = 0;
	while (dest[in] != '\0')
	{
		in++;
	}
	while (src[out] != '\0' && out < (size - 1))
	{
		dest[in] = src[out];
		out++;
		in++;
	}
	if (size > 0)
		dest[in] = '\0';
	if (size > in)
		return (in);
	else
		return (size);
}
