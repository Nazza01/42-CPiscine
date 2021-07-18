int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fact = nb * fact;
		nb--;
	}
	return (fact);
}
