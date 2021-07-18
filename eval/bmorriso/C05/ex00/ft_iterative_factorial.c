int	ft_iterative_factorial(int nb)
{
	int	i;
	int	returnValue;

	i = 1;
	if (nb < 0)
		return (0);
	returnValue = 1;
	while (i <= nb)
	{
		returnValue *= i;
		i++;
	}
	return (returnValue);
}
