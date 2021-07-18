char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	yeah;
	unsigned int	no;

	yeah = 0;
	no = 0;
	while (dest[yeah] != '\0')
	{
		yeah++;
	}
	while (src[no] != '\0' && no < nb)
	{
		dest[yeah] = src[no];
		no++;
		yeah++;
	}
	dest[yeah] = '\0';
	return (dest);
}
