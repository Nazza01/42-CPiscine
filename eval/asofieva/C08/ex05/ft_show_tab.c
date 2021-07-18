#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(long nb)
{
	char	c;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;
	int		j;

	i = -1;
	while (par[++i].str)
	{
		j = -1;
		while (par[i].str[++j])
			write(1, &par[i].str[j], 1);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = -1;
		while (par[i].copy[++j])
			write(1, &par[i].copy[j], 1);
		write(1, "\n", 1);
	}
}

