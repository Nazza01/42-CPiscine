/*
Calculates the square root of nb.
Returns the square if it is found.
Limit nb by the largest integer.
Return 0 if the square is an irrational number.
*/
int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	while (square * square <= nb && (nb <= 46340))
	{
		if ((square * square) == nb)
			return (square);
		square++;
	}
	return (0);
}
