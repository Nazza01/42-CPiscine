#include <unistd.h>
#include <stdio.h>
void	ft_rev_params(char *str)
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
	int	b;

	b = 0;
	counter = 1;
	while (counter < argc)
	{
		counter++;
		b++;
	}
	while (counter >= 2)
	{	
		ft_rev_params(argv[counter - 1]);
		counter--;
	}
	return (0);
}
