int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	c;

	i = 1;
	c = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		c = nb * c;
		power--;
	}
	return (c);
}
