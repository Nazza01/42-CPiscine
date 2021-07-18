/*
Uses iteration to calculate a factorial based on the input nb.
Returns 0 if the function does not have valid input.
Otherwise returns the result.
e.g;
	nb		3
	result	1
	i		2
	While i is less than the input number (3)
		result = 1(result) * 2(i);
		2 becomes 3
			...
		result = 2(result) * 3(i)
		3 becomes 4
		exits
	Return the result which for nb = 3 is 6
*/
int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 2;
	if (nb >= 0)
	{
		while (i <= nb)
		{
			result *= i;
			i++;
		}
	}
	else
		return (0);
	return (result);
}
