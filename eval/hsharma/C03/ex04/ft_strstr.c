char	*ft_strstr(char *str, char *to_find)
{
	char	*i;
	char	*j;

	if (!*to_find)
		return (str);
	while (*str)
	{
		i = str;
		j = to_find;
		while (*j && *i == *j)
		{
			++i;
			++j;
		}
		if (*j == 0)
			return (str);
		++str;
	}
	return (0);
}
