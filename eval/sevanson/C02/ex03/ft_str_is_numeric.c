int	ft_str_is_numeric(char *str)
{
	int	 x;

	x = 0;
	while (str[x])
	{
		if ((str[x] >= '0' && str[x] <= '9') || (str[x] == '\0'))
		{
			x++;
		}
		else
			return (0);
	}
	return (1);
}
