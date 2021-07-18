#include "headers.h"

char	*GetBuffer(const char *filename)
{
	char	*buffer;

	buffer = fillBuffer(filename);
	return (buffer);
}

int	CheckLineLength(char **map, int lines)
{
	int	i;
	int	length;

	i = 0;
	length = ft_strlen(map[0]);
	while (++i < lines)
		if (length != ft_strlen(map[i]))
			return (0);
	return (length);
}

int	ReadFirstLine(char *line, char displayChars[3], int realLines)
{
	int	i;
	int	j;
	int	lines;

	i = ft_strlen(line);
	j = 2;
	while (i > 0 && j >= 0)
	{
		if (line[--i] < 32)
			return (0);
		displayChars[j--] = line[i];
	}
	if (displayChars[0] == displayChars[1]
		|| displayChars[0] == displayChars[2]
		|| displayChars[1] == displayChars[2])
		return (0);
	if (i == 0)
		return (0);
	line[i] = '\0';
	lines = ft_atoi(line);
	if (lines != realLines - 1 || lines <= 0 || !ft_str_is_numeric(line))
		return (0);
	return (lines);
}
