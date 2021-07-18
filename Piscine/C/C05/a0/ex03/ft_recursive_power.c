/*
Uses recursion to calculate powers.
We want to handle:
	When nb and power is above 0
		return the result of nb 
			* the result of nb power - 1
	When power is lower than 0
		return 0
	All other cases
		return 1

e.g; nb = 2, power = 3
	new_result			nb
		1 		x 		2
		2		x		2
		4		x		2
*/
int	ft_recursive_power(int nb, int power)
{
	if (nb > 0 && power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power < 0)
		return (0);
	else
		return (1);
}
