char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	if (nb == 0)
		return (dest);
	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	findWhitespaceAndLength(char *str, int *negative)
{
	int	i;

	i = -1;
	*negative = 0;
	while (str[++i] != '\0')
	{
		if (str[i] == ' '
			|| str[i] == '+'
			|| (str[i] >= '\t' && str[i] <= '\r'))
			continue ;
		if (str[i] == '-')
		{
			*negative = !*negative;
			continue ;
		}
		break ;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	value;

	value = 0;
	i = findWhitespaceAndLength(str, &negative);
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		if (value > 214748364 || (value == 214748364 && str[i] > 7))
		{
			if (negative)
				return (-2147483648);
			return (2147483647);
		}
		value = 10 * value + (str[i++] - '0');
	}
	if (negative)
		return (-value);
	return (value);
}
