int	ft_str_is_alpha(char *str)
{
	int	i;
	int	isalpha;

	i = 0;
	isalpha = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		{
			isalpha = 1;
		}
		else
		{
			isalpha = 0;
			return (isalpha);
		}
		i++;
	}
	return (isalpha);
}
