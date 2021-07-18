#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

char	*getLine(char *line)
{
	char	*newLine;
	int		i;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	newLine = malloc(i * sizeof(char));
	if (i == 0)
		return (newLine);
	ft_strncpy(newLine, line, i);
	newLine[i] = '\0';
	return (newLine);
}

char	**AllocLines(const char *buffer, int *lineCount)
{
	char	**lines;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
			k++;
		i++;
	}
	lines = malloc((k + 1) * sizeof(char *));
	lines[k] = 0;
	*lineCount = k;
	return (lines);
}

char	**splitLines(char *buffer, int *lineCount)
{
	char	**lines;
	int		i;
	int		j;
	int		k;

	lines = AllocLines(buffer, lineCount);
	k = 0;
	i = 0;
	while (buffer[i] != '\0')
	{
		j = 0;
		while (buffer[i] != '\n' && buffer[i] != '\0')
		{
			i++;
			j++;
		}
		lines[k] = malloc(j * sizeof(char));
		lines[k] = getLine(buffer + i - j);
		k++;
		i++;
	}
	return (lines);
}
