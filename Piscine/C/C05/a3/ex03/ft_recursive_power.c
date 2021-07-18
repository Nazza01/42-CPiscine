/*
Uses recursion to calculate powers.
If power is above 0 (negative power isn't valid), we want to use recursion 
	calculate until power is greater than 0
If power is 0, then we return 0
	In logical maths ^0 is NaN
Otherwise return 0
*/
int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else
		return (0);
}
