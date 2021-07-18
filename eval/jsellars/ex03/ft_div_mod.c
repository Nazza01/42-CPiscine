void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	div_result;
	int	mod_result;

	div_result = a / b;
	mod_result = a % b;
	*div = div_result;
	*mod = mod_result;
}
