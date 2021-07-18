char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		ft_strlen(char *str);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	count;
	int	max;

	max = ft_strlen(src);
	count = 0;
	while (count < max)
	{
		while (count < n)
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
		count++;
	}
	dest[count] = 0;
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
