void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divRes;
	int	modRes;

	divRes = *a / *b;
	modRes = *a % *b;
	*a = divRes;
	*b = modRes;
}
