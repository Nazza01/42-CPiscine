#include <unistd.h>
int	main(int argCount, char *argVect[])
{
	int	i;
	int	argLimit;

	i = 0;
	argLimit = 1;
	if (argCount == 1)
	{
		return (0);
	}
	else
	{
		while (argVect[i][0] != '\0')
		{
			write(1, &argVect[i][0], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
