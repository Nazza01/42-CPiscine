#include	<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		multi;
	int		result;

	multi = 1;
	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	while (multi <= nb)
	{
		result = result * multi;
		multi++;
	}
	return (result);
}
