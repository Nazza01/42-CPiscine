/*
Uses iteration to calculate powers.
As per the instructions we want to handle;
	- power lower than 0
		returns 0
	- 0 to the power of 0
		returns 1
	- when nb and power is above 0
		calculate result * nb
e.g; nb = 2, power = 3
	new_result			nb		
		1 		x 		2
		2		x		2
		4		x		2
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (nb == 0 && power == 0)
	{
		return (result);
	}
	else if (nb > 0 && power > 0)
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}
