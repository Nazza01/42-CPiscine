/*
Calculates fibonacci's sequence using recursion.
As the sequence starts like so: 0, 1, 1, 2
We hande this by checking index against specific values
Otherwise we want to check above a 1th index
	Formulae:	(index - 1) + (index - 2)
Else
	return -1 (as per pdf)
*/
int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (-1);
}
