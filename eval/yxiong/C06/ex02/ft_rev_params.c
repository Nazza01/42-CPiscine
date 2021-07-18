#include <unistd.h>

void	ft_put(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_put(argv[i]);
		write(1, "\n", 1);
		--i;
	}
	return (0);
}
