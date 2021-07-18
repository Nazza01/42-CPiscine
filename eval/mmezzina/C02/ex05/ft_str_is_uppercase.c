int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	isupper;

	i = 0;
	isupper = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			isupper = 1;
		}
		else
		{
			isupper = 0;
			return (isupper);
		}
		i++;
	}
	return (isupper);
}
