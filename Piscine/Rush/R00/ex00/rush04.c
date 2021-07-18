#include <unistd.h>
#include <stdio.h>
extern void	ft_putchar(char output);
void		rush(int x, int y);
void		arrayPrint(int xPrint, int yPrint, int xPos, int yPos);

void	rush(int x, int y)
{
	int	xPos;
	int	yPos;

	yPos = 1;
	while (yPos <= y)
	{
		xPos = 1;
		while (xPos <= x)
		{
			arrayPrint(x, y, xPos, yPos);
			xPos++;
		}
		ft_putchar('\n');
		yPos++;
	}
}

void	arrayPrint(int xPrint, int yPrint, int xPos, int yPos)
{
	if (yPos == 1)
	{
		if (xPos == 1)
			ft_putchar('A');
		else if (xPos == xPrint)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (yPos == yPrint)
	{
		if (xPos == 1)
			ft_putchar('C');
		else if (xPos == xPrint)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (xPos == 1 || xPos == xPrint)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}
