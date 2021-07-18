char	*ft_strcapitalize(char *str)
{
	int		index;
	char	last;

	index = 0;
	while (str[index] != '\0')
	{
		if (index == 0)
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
		}
		if (!((last >= 'a' && last <= 'z')
				|| (last >= 'A' && last <= 'Z')
				|| (last >= '0' && last <= '9')))
		{
			if (str[index] >= 'a' && str[index] <= 'z')
				str[index] = str[index] - 32;
		}
		else if (str[index] >= 'A' && str[index] <= 'Z')
			str[index] = str[index] + 32;
		last = str[index];
		index++;
	}
	return (str);
}
