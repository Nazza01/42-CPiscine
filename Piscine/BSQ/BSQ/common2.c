int	isAny(char c, const char *check)
{
	int	i;

	i = 0;
	while (check[i] != '\0')
	{
		if (c == check[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!isAny(str[i], "0123456789"))
			return (0);
		i++;
	}
	return (1);
}

void	ConvertMap(char **map, int height, char from[3], char to[3])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			k = 0;
			while (k < 3)
			{
				if (map[i][j] == from[k])
					map[i][j] = to[k];
				k++;
			}
			j++;
		}
		i++;
	}
}
