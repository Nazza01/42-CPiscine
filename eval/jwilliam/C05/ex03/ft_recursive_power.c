#include	<unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	else
	{
		return (1);
	}
}
