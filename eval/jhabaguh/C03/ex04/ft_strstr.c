char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;	

	a = 0;
	b = 0;
	while (str[a] != '\0')
	{
		while (str[a] == to_find[b])
		{
			a++;
			b++;
			if (to_find[b] == '\0')
			{
				return (&str[a - b]);
			}
		}
		a++;
		b = 0;
	}
	return (0 );
}
