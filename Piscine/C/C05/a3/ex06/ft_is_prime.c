/*
Prime numbers are numbers that are divisible by itself and 1

E.g If nb = 11

We want to handle nb being 1 or 0
	return 0 if so
while check is less than half nb
	if nb has no remainder
		return 0
	otherwise increment check and check for prime numbers
Return 1
*/
int	ft_is_prime(int nb)
{
	int	check;

	check = 2;
	if (nb < 2)
		return (0);
	while (check <= (nb / 2))
	{
		if ((nb % check) == 0)
			return (0);
		check++;
	}
	return (1);
}
