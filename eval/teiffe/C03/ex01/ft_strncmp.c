#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while ( n >= 0 && (s1[i] != '\0') || (s2[i] != '\0'))
	{
		j = i;
		while (j < n)
		{
			if (s1[i] < s2[i])
			{
				return (-1);
			}
			if (s1[i] > s2[i])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	printf("%i", ft_strncmp("H", "He", -1));
	return (0);
}
