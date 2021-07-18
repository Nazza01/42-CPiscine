#include <unistd.h>
void	ft_putchar(char output);

void	ft_putchar(char output)
{
	write(1, &output, 1);
}
