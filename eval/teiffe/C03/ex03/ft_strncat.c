#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	string1[20] = "abcdef";
	char	string2[] = "ghijkl";

//	ex03:
	printf("-------------------------------\nex03:	ft_strncat\n-------------------------------\nExpected output:	abcdefghijklghi\nActual output:		%s\n\n", ft_strncat(string1, string2, 3));
}