int	ft_str_is_lowercase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			count++;
		}
		else if (str[0] == '\0')
		{
			return (1);
		}
		else
			return (0);
	}
	return (1);
}
