int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	yeet;
	int				yeeter;

	yeet = 0;
	if (n == 0)
		return (0);
	while (yeet < n && (s1[yeet] != '\0' && s2[yeet] != '\0'))
	{
		yeeter = (unsigned char)(s1[yeet]) - (unsigned char)(s2[yeet]);
		if (yeeter < 0)
			return (-1);
		else if (yeeter > 0)
			return (1);
		yeet++;
	}
	if (s1[yeet] == '\0' && s2[yeet] != '\0')
		return (-1);
	else if (s1[yeet] != '\0' && s2[yeet] == '\0')
		return (1);
	else
		return (0);
}
