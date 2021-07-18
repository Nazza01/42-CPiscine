#include <unistd.h>
void	printchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	longnb;

	longnb = nb;
	if (longnb < 0)
	{
		longnb = -longnb;
		printchar('-');
	}
	if (longnb < 10)
	{
		printchar(longnb + '0');
	}
	else
	{
		ft_putnbr(longnb / 10);
		ft_putnbr(longnb % 10);
	}
}
