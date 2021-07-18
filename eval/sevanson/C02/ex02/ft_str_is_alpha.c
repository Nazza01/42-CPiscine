int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if ((str[x] >= 'a' && str[x] <= 'z') || (str[x] == '\0'))
		{
			x++;
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			x++;
		}
		else
			return (0);
	}
	return (1);
}
