#include <unistd.h>

int	main(int argC, char **argV)
{
	int	i;
	(void) argC;

	i = 0;
	while (argV[1][i] != '\0')
	{
		write(1, &argV[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
