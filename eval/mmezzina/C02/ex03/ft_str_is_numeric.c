int	ft_str_is_numeric(char *str)
{
	int	i;
	int	isnum;

	i = 0;
	isnum = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			isnum = 1;
		}
		else
		{
			isnum = 0;
			return (isnum);
		}
		i++;
	}
	return (isnum);
}
