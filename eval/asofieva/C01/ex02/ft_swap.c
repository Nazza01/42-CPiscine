void	ft_swap(int *a, int *b)
{
	int	temporary_variable;

	temporary_variable = *a;
	*a = *b;
	*b = temporary_variable;
}
