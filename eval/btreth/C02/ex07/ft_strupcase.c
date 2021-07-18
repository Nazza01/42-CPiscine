char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	index;
	int	upper;

	index = 0;
	upper = 32;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] - upper;
		}
	}
	return (str);
}
