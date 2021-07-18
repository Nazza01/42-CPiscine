#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

#define BUF_SIZE 1

char	*g_prog;

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	print_error_msg(char *file)
{
	ft_putstr(basename(g_prog));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
	errno = 0;
}

void	display_file(int fd, char *file)
{
	// long			size;
	unsigned char	buf[BUF_SIZE];

	while ((read(fd, buf, 1) > 0))
	{
		if (errno)
		{
			print_error_msg(file);
			return ;
		}
		write(1, buf, 1);
	}
}

int	main(int argc, char *argv[])
{
	int	fd;
	int	i;

	g_prog = argv[0];
	if (argc == 1)
		display_file(0, 0);
	else
	{
		i = 0;
		while (++i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
			{
				print_error_msg(argv[i]);
				continue ;
			}
			display_file(fd, argv[i]);
			close(fd);
		}
	}
	return (0);
}
