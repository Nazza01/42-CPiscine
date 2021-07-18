int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= '0' && str[index] <= '9')
		{
			index++;
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
