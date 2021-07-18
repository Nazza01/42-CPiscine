#include <stdlib.h>
#include <stdio.h>
#include "headers.h"

int	HasValidChars(char **map, char Chars[2], int lines)
{
	int	i;
	int	j;

	i = -1;
	while (++i < lines - 1)
	{
		j = -1;
		while (map[i][++j] != '\0')
		{
			if (!isAny(map[i][j], Chars))
				return (0);
		}
	}
	return (1);
}

char	**PrecheckMap(char **map, char Chars[3], int *realLines, int *width)
{
	int		lines;
	char	validChars[2];

	lines = ReadFirstLine(map[0], Chars, *realLines);
	free(map[0]);
	map++;
	if (lines == 0)
		return (0);
	*width = CheckLineLength(map, lines);
	if (*width == 0)
		return (0);
	validChars[0] = Chars[0];
	validChars[1] = Chars[1];
	if (!HasValidChars(map, validChars, *realLines))
		return (0);
	return (map);
}

char	**GetMap(const char *filename, char displayChars[3])
{
	char	*buffer;
	char	**map;
	int		lines;
	int		width;

	buffer = GetBuffer(filename);
	if (!buffer)
		return (0);
	map = splitLines(buffer, &lines);
	free(buffer);
	map = PrecheckMap(map, displayChars, &lines, &width);
	lines -= 1;
	ConvertMap(map, lines, displayChars, ".ox");
	return (map);
}
