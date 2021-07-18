#include <stdio.h>
#include <unistd.h>
//	Function Declarations
void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n > 0 || n == 0)
	{
		write(1, "P", 1);
	}
	else if (n < 0)
	{
		write(1, "N", 1);
	}
	write(1, "\n", 1);
}
