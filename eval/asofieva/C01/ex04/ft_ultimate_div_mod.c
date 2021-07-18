void	ft_ultimate_div_mod(int *a, int *b)
{
	int value_1;
	int value_2;

	value_1 = *a;
	value_2 = *b;
	*a = value_1 / value_2;
	*b = value_1 % value_2;
}
