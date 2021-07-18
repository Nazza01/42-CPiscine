#include	<unistd.h>

int	ft_sqrt(int nb)
{
	int		num1;
	int		num2;

	num1 = nb;
	num2 = 1;
	if (nb == 0 || nb == 1)
	{
		return (nb);
	}
	while (num1 > num2)
	{
		num1 = (num1 + num2) / 2;
		num2 = nb / num1;
	}
	if (num1 * num1 == nb)
	{
		return (num1);
	}
	else
	{
		return (0);
	}
}
