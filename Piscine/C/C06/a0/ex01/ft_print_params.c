#include <unistd.h>
int	main(int argCount, char *argVect[])
{
	int	i;
	int	j;
	int	argLimit;

	i = 1;
	j = 0;
	argLimit = 1;
	if (argCount == 1)
		return (0);
	else
	{
		while (argVect[i][j] != '\0')
		{
			write(1, &argVect[1][0], 1);
			i
		}
		/*
		while (argVect[i][j] != '\0')
		{
			if (argVect[i][j] == ' ')
				j++;
			else
			{
				write(1, &argVect[i][j], 1);
				j++;
			}
			i++;
		}
		*/
	}
	write(1, "\n", 1);
	return (0);
}
