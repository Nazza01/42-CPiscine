int	ft_sqrt(int nb)
{
	int	c;

	c = 0;
	if (nb < 0)
		return (0);
	while (c <= nb)
	{
		if (nb == c * c)
			return (c);
		c++;
	}
	return (0);
}
