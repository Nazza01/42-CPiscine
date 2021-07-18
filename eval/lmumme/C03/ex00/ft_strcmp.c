#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	ret;

	while (!(*s1 - *s2) && *s2)
		s1 += 1 + (*s2++ & 0);
	ret = *s1 - *s2;
	return ((ret > 0) - (ret < 0));
}
