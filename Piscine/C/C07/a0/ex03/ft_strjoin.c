#include <stdlib.h>
char	*ft_cat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d])
		d++;
	while (src[s])
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d + s] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(sizeof(char));
	if (size == 0)
	{
		*result = 0;
		return (result);
	}
	*strs = 0;
	while (i < size)
	{
		ft_cat(result, strs[i]);
		if (i < (size - 1))
			ft_cat(result, sep);
		i++;
	}
	return (result);
}
