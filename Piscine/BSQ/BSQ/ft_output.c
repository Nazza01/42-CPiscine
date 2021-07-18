#include <unistd.h>
#include "headers.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_fill(char **out, int *xycord, int size)
{
	int		count;
	int		yfill;
	int		xfill;
	char	fill;

	count = 0;
	fill = 'x';
	yfill = size - 1;
	while (yfill >= 0)
	{
		xfill = size - 1;
		while (xfill >= 0)
		{
			out[xycord[1] + yfill][xycord[0] + xfill] = fill;
			xfill--;
		}
		yfill--;
	}
}

void	ft_output(char **out, int *xycord, int size)
{
	ft_fill(out, xycord, size);
}
