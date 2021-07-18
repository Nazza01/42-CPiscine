int	ft_iterative_factorial(int nb)
{
	int	counter;

	counter = nb - 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (counter > 0)
	{
		nb = nb * counter;
		counter--;
	}
	return (nb);
}
