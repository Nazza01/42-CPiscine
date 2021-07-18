#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (n > 0 && s1[a] != '\0' && s2[a] != '\0')
	{
		if (*s1 != *s2)
			break ;
		a++;
		n--;
	}
	if (n == 0)
	{		
		return (0);
	}
	return (s1[a] - s2[a]);
}
