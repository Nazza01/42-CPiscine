int	ft_str_is_printable(char *str)
{
	int	i;
	int	isprint;

	i = 0;
	isprint = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			isprint = 1;
		}
		else
		{
			isprint = 0;
			return (isprint);
		}
		i++;
	}
	return (isprint);
}
