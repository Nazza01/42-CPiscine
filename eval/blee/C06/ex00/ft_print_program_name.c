#include <unistd.h>
void	ft_putchar(char *str)
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

int	main(int argc, char **argv)
{
	if (argc)
	{
		ft_putchar(argv[0]);
		return (0);
	}
}
