//	"Why use lot word when few word do trick?"
//						-Mahatma Gandhi (probably)
char	*ft_strcat(char *dest, char *src)
{
	static int	i = 0;

	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest - (i = 0));
}
