int	ft_is_prime(int nb)
{
	int	c;

	c = 2;
	if (nb <= 1)
		return (0);
	while (c * c <= nb)
	{
		if (nb % c == 0)
			return (0);
		c++;
	}
	return (1);
}
