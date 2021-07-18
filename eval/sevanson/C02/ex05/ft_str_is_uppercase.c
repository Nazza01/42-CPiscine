int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	expected;

	i = 0;
	expected = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
		}
		else
		{
			expected = 0;
			return (expected);
		}
	}
	return (expected);
}
