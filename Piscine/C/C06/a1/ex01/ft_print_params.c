#include <unistd.h>

/*
Using a write function to output a string to stdout
Outputs until the null terminating character is hit.
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
Gets command line input and outputs each parameter.
Returns 0 if argCount is 1.
Otherwise outputs using write and newline between each parameter.
*/
int	main(int argCount, char **argVect)
{
	int	i;

	i = 1;
	if (argCount == 1)
		return (0);
	else
	{
		while (i < argCount)
		{
			ft_putstr(argVect[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
