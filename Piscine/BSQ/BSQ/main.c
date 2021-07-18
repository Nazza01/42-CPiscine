#include "headers.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	**map;
	char	chars[3];
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (++i < argc)
	{
		map = GetMap(argv[i], chars);
		if (!map)
		{
			write(2, "map error\n", 10);
			continue ;
		}
		ft_mover(map);
		while (map[j] != 0)
		{
			write(1, map[j], 27);
			write(1, "\n", 1);
			j++;
		}
		free(--map);
	}
}
