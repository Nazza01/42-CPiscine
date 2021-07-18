char	*ft_strstr(char *str, char *to_find)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	if (to_find[i] != '\0')
		return (str);
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && (str[i] == to_find[i]))
				i++;
			if (to_find[i] == '\0')
				return (str);
		}
		pos++;
	}
	return (str);
}
