//	Swaps two parameters using a temporary variable
void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
