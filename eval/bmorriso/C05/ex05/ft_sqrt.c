int	root(int nb, int value)
{
	int	i;

	if (value >= 46341)
		return (-1);
	i = value * value;
	if (i == nb)
		return (0);
	if (i > nb)
		return (-1);
	return (1);
}

int	ft_sqrt(int nb)
{
	int	isRoot;
	int	current;
	int	lowerBound;
	int	upperBound;

	current = nb / 2;
	lowerBound = 0;
	upperBound = nb;
	while (1)
	{
		if (upperBound <= lowerBound + 1)
			return (0);
		isRoot = root(nb, current);
		if (isRoot == 0)
			return (current);
		else
		{
			if (isRoot < 0)
				upperBound = current;
			else
				lowerBound = current;
			current = lowerBound + ((upperBound - lowerBound) / 2);
		}
	}
}
