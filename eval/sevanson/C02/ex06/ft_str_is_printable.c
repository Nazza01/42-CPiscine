int	ft_str_is_printable(char *str)
{
	int	counter;
	int	retrn;

	retrn = 1;
	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] < 32)
		{
			retrn = 0;
		}
		counter++;
	}
	return (retrn);
}
