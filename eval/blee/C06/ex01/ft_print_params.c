#include <unistd.h>
void	ft_print_params(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		write(1, &str[counter], 1);
		counter++;
	}
	write(1, "\n", 1);
}

int	main( int argc, char **argv)
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		ft_print_params(argv[counter]);
		counter++;
	}
	return (0);
}
