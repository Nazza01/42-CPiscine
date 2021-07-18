int	ft_strcmp(char *s1, char *s2)
{
	int	yeet;
	int	yeeted;

	yeet = 0;
	yeeted = 0;
	while (s1[yeet] != '\0' && s2[yeet] != '\0')
	{
		yeeted = (int)(s1[yeet]) - (int)(s2[yeet]);
		if (yeeted < 0)
			return (-1);
		else if (yeeted > 0)
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
