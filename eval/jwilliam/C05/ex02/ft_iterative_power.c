#include	<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	mult;

	result = 1;
	mult = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (mult <= power)
	{
		result = result * nb;
		mult++;
	}
	return (result);
}
