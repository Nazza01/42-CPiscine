#include <unistd.h>

/*
Outputs a string to the command line using the write() function
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
Gets command line input and outputs in reverse each parameter.
Returns 0 if argCount is 1.
Otherwise outputs using write and newline between each parameter.
*/
int	main(int argCount, char **argVect)
{
	if (argCount == 1)
		return (0);
	else
	{
		while (argCount > 1)
		{
			ft_putstr(argVect[argCount - 1]);
			ft_putstr("\n");
			argCount--;
		}
	}
	return (0);
}
