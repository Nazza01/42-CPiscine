#include	<unistd.h>

int	ft_is_prime(int nb)
{
	int		num;

	num = 2;
	if (nb == 0 || nb == 1)
	{
		return (0);
	}	
	while (num < nb)
	{
		num++;
		if ((nb % num == 0) && (num != nb))
		{
			return (0);
		}
	}
	return (1);
}
