char	*ft_strcat(char *dest, char *src)
{
	int	noyou;
	int	noyou2;

	noyou = 0;
	noyou2 = 0;
	while (dest[noyou] != '\0')
		noyou++;
	while (src[noyou2] != '\0')
	{
		dest[noyou] = src[noyou2];
		noyou2++;
		noyou++;
	}
	dest[noyou] = '\0';
	return (dest);
}
