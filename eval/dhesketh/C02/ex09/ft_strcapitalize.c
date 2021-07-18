int	is_letter(char c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	while (str[i] != '\0')
	{
		if (word_start && !(str[i] < 'a' || str[i] > 'z'))
		{
			str[i] -= 'a' - 'A';
			word_start = 0;
		}
		else if (!word_start && !(str[i] < 'A' || str[i] > 'Z'))
			str[i] += 'a' - 'A';
		else if (!word_start && !is_letter(str[i]))
			word_start = 1;
		else if (word_start && !(str[i] < 'A' || str[i] > 'Z'))
			word_start = 0;
		i++;
	}
	return (str);
}
