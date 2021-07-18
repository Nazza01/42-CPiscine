int	ft_iterative_power(int nb, int power)
{
	long double	result;

	result = 1.0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		result *= nb;
		--power;
	}
	return (result);
}
