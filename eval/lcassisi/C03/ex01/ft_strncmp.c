int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (n > 0 && s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
			break ;
		x++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	return (s1[x] - s2[x]);
}
