char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	index;
	int	lower;

	index = 0;
	lower = 32;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			str[index] + lower;
		}
	}
	return (str);
}
