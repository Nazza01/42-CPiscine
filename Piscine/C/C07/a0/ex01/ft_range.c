#include <stdlib.h>
/*
This will take a range from min(included) to max(excluded)
and assign it to the integer array that will be returned.
If min is greater than max then return a NULL pointer.
*/
int	*ft_range(int min, int max)
{
	int	*array;
	int	len;

	len = max - min;
	array = malloc(sizeof(int) * len);
	if (min >= max)
		return (NULL);
	else
	{
		while (min < max)
		{
			array[min] = min;
			min++;
		}
		return (array);
	}
}
