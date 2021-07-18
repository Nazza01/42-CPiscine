#include "headers.h"
#include <stdio.h>

void	ft_setPos(int remX, int remY, int *xyPos)
{
	xyPos[0] = remX;
	xyPos[1] = remY;
}

void	ft_mover(char **map)
{
	int	size;
	int	remPos[2];
	int	xyPos[2];

	xyPos[0] = 0;
	xyPos[1] = 0;
	size = 1;
	while (map[xyPos[1] + size - 1] != 0)
	{
		while (map[xyPos[1]][xyPos[0] + size - 1] != '\0')
		{
			if (ft_checker(map, xyPos, size))
			{
				remPos[0] = xyPos[0];
				remPos[1] = xyPos[1];
				size++;
				continue ;
			}
			xyPos[0]++;
		}
		xyPos[1]++;
	}
	ft_setPos(remPos[0], remPos[1], xyPos);
	ft_output(map, xyPos, size - 1);
}
