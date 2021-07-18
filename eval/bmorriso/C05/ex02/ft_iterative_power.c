int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	returnValue;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	returnValue = nb;
	while (++i < power)
		returnValue *= nb;
	return (returnValue);
}
