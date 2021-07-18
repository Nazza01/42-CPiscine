/*
ft_checker will take the array, arrayPosition and the square size.
Will check from Right to left and bottom to top. 
Returns 1 if can move. Returns 0 if cannot move.
*/
#include <stdio.h>
int	ft_checker(char **array, int *arrayPos, int sqSize)
{
	int	x;
	int	y;
	int	xsize;
	int	ysize;

	x = arrayPos[0];
	y = arrayPos[1];
	xsize = sqSize - 1;
	ysize = sqSize - 1;
	while (ysize >= 0)
	{
		while (xsize >= 0)
		{
			if (array[y + ysize][x + xsize] == 'o')
				return (0);
			xsize--;
		}
		xsize = sqSize - 1;
		ysize--;
	}
	return (1);
}
