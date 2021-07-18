#include <stdlib.h>
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (*range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (len);
}
