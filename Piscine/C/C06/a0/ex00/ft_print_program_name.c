#include <unistd.h>

int	main(int argCount, char *argVect[])
{
	int	i;

	i = 0;
	while (argVect[0][i] != '\0' && argCount == 1)
	{
		write(1, &argVect[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
