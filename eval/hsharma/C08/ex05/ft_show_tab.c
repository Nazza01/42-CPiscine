#include"ft_stock_str.h"
#include<unistd.h>
#include<stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	nb;

	nb = 0;
	if (n < 0)
		write (1, "-", 1);
	n = -nb;
	if (n < 9)
		ft_putnbr(n / 10);
		write(n % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int			i;
	t_stock_str	par;

	while (par[i].str != 0)
	{	
		write(par[i].str, par[i].size);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}	
