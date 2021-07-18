char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	space;

	index = 0;
	space = 32;
	ft_strlowcase(str);
	while (str[index])
	{
		if (str[0] || str[index - 1] == space)
		{
			str[index] - space;
		}
	}
	return (str);
}

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
