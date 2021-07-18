int	ft_sqrt(int nb)
{
	int	j;

	j = 1;
	if (nb > 0)
	{
		while (j * j <= nb)
		{
			if (j * j == nb)
				return (j);
			else if (j >= 46341)
				return (0);
			j++;
		}
	}
	return (0);
}
