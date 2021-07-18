int	ft_str_is_uppercase(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
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
