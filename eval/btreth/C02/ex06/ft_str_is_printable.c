int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] >= 32 && str[count] <= 127)
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
