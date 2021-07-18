#include "ft_stock_str.h"
#include <unistd.h>

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par->str[i] != '\0')
	{
		write(1, par->str[i], par->size);
		write(1, "\n", 1);
		write(1, par->size, 1);
		write(1, "\n", 1);
		write(1, par->cpy[i], par->size);
		write(1, "\n", 1);
		i++;
	}
}
