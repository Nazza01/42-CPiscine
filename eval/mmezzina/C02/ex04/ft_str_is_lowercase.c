int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	islower;

	i = 0;
	islower = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			islower = 1;
		}
		else
		{
			islower = 0;
			return (islower);
		}
		i++;
	}
	return (islower);
}
