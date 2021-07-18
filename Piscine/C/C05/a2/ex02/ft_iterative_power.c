/*
Will calculate the power using 
	(nb ^ power) = nb * ... * nb
				multiplies using power amount
Uses a while statement to make sure it does not run forever and an iterator
*/
int	ft_calc(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (i < power)
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	return (result);
}

/*
Checks input and calculates if nb and power is valid.
Returns the result of the calculation
According to pdf
	0 power 0 returns 0
	if power is less than 0 return 0
*/
int	ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (nb > 0 && power > 0)
		return (ft_calc(nb, power));
	else if (nb <= 0 && power >= 0)
		return (ft_calc(nb, power));
	else
		return (1);
}
