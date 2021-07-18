#ifndef HEADERS_H
# define HEADERS_H

char	**splitLines(char *buffer, int *lineCount);
char	*fillBuffer(const char *filename);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strncpy(char *dest, const char *src, unsigned int size);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		isAny(char c, const char *check);
int		ft_str_is_numeric(char *str);
void	ConvertMap(char **map, int height, char from[3], char to[3]);
char	**GetMap(const char *filename, char displayChars[3]);
int		ft_checker(char **array, int *arrayPos, int sqSize);
void	ft_output(char **out, int *xycord, int size);
void	ft_mover(char **map);
char	*GetBuffer(const char *filename);
int		CheckLineLength(char **map, int lines);
int		ReadFirstLine(char *line, char displayChars[3], int realLines);
int		calcLine(const char *filename, char displayChars[3]);

#endif
