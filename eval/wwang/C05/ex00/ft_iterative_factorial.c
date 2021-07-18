int	ft_iterative_factorial(int nb)
{
	int	i;
	int	c;

	i = 1;
	c = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		c *= i;
		i++;
	}
	return (c);
}
