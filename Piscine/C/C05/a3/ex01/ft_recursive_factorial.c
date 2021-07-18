/*
Uses recursion to calculate factorials.
	3! == 3 * 2 * 1 == 6
	- If nb is greater than or equals 1
		- Will recursively calculate until nb is greater than or equals 1
	- If nb is less than 0
		- Will return 0 as this input is invalid for factorial algorithms
	- Otherwise it will return 1
*/
int	ft_recursive_factorial(int nb)
{
	if (nb >= 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb < 0)
		return (0);
	else
		return (1);
}
