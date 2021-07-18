int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		if (i == 2)
			i++;
		else
			i += 2;
		if (i % 3 == 0 && i != 3)
			i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = nb;
	while (1)
	{
		if (ft_is_prime(prime))
		{
			return (prime);
		}
		prime++;
	}
}
