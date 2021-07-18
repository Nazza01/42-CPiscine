void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div_ans;
	int	mod_ans;

	div_ans = *a / *b;
	mod_ans = *a % *b;
	*a = div_ans;
	*b = mod_ans;
}
