#include <stdio.h>
#include <unistd.h>
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num < 58)
	{
		write(1, &num, 1);
		num++;
	}
	write(1, "\n", 1);
}
