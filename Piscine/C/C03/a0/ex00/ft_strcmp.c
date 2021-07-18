int	ft_strLen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	check;
	int	s1Len;
	int	s2Len;

	i = 0;
	check = 0;
	s1Len = ft_strLen(s1);
	s2Len = ft_strLen(s2);
	while (s1[i] != '\0' && s2[i] != '\0')
	{		
		if (s1Len > s2Len)
			check = 1;
		else if (s1Len == s2Len)
			check = 0;
		else if (s1Len < s2Len)
			check = -1;
		i++;
	}
	return (check);
}
