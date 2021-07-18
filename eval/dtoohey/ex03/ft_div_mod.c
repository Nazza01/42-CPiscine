void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_ans;
	int	mod_ans;

	div_ans = a / b;
	mod_ans = a % b;
	*div = div_ans;
	*mod = mod_ans;
}
