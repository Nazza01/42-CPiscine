#include <unistd.h>

/*
Uses argCount and *argVect[] to get command line arguments.
We want to only print the program name and limit it by argCount only equaling 1
Using the write command to output the program name
Prints a newline as well
*/
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
