#include <unistd.h>

// Will write to standard output a passed parameter C write function
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
