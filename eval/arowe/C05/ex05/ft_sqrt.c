int	ft_sqrt(int nb)
{
	int	res;

	res = 46340;
	while (res > 0)
	{
		if (nb / res == res)
			return (res);
		res--;
	}
	return (0);
}
