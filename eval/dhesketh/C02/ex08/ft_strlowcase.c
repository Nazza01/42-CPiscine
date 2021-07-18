#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	word_start;

	i = 0;
	word_start = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] < 'A' || str[i] > 'Z'))
		{
			str[i] += 'a' - 'A';
		}
		i++;
	}
	return (str);
}
