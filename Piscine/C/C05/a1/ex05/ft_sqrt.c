/*
We want to get the square root of nb
If nb equals or is below 0
	Return 0
While (i * i) is below nb
	increment i so it can be squared
		as squaring is n * (n + 1)
	If we get the result of the multiplication equaling nb
		return i (as this will be the square root result)
	Otherwise return 0
Example:
	if nb = 4 we should return 2
		i should equal 2 when returned
			power			result of power
			2^2		2 x 2		4
*/
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
