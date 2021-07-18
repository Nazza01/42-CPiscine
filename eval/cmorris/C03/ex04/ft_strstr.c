char	*ft_strstr(char *str, char *to_find)
{
	int		yes;
	int		no;
	char	*maybe;

	yes = 0;
	no = 0;
	if (to_find == 0)
		return (str);
	while (str[yes] != '\0')
	{
		if (str[yes] == to_find[no])
			no++;
		else
			no = 0;
		if (to_find[no] == '\0')
		{
			maybe = &str[yes - no + 1];
			return (maybe);
		}
		yes++;
	}
	return (0);
}
