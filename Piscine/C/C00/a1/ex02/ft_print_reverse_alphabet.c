#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	revalph;

	revalph = 'z';
	while (revalph >= 'a')
	{
		write(1, &revalph, 1);
		revalph--;
	}
}
