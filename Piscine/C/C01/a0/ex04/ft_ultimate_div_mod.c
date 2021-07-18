void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tempDiv;
	int		remMod;

	tempDiv = *a;
	remMod = *b;
	*a = tempDiv / *b;
	*b = remMod % tempDiv;
}
