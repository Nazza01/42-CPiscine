#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	char	*temp;

	a = 0;
	while (++a < argc)
	{
		b = a;
		while (++b < argc)
		{
			if (ft_strcmp(argv[a], argv[b]) > 0)
			{
				temp = argv[a];
				argv[a] = argv[b];
				argv[b] = temp;
			}
		}
	}
	a = 0;
	while (++a < argc)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
	}
	return (0);
}
