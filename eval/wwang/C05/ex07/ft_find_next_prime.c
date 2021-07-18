int	ft_is_prime(int n)
{
	int	c;

	c = 2;
	if (n <= 1)
		return (0);
	while (c * c <= n)
	{
		if (n % c == 0)
			return (0);
		c++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
	{
		while (ft_is_prime(nb) == 0 && nb <= 2147483647)
			nb++;
	}
	return (nb);
}
