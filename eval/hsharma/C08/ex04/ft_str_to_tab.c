#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcopy(char *src)
{
	int		i;
	char	*cpy;

	cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (cpy == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*finals;

	finals = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (finals == NULL)
		return (0);
	i = 0;
	while (i < ac)
	{
		finals[i].size = ft_strlen(av[i]);
		finals[i].str = av[i];
		finals[i].copy = ft_strcopy(av[i]);
		i++;
	}
	finals[i].str = 0;
	return (finals);
}
/*
int	main(int argc, char **argv)
{
	int i = 0;
	char *x[3];

	x[0] = "This";
	x[1] = "is";
	x[2] = "a new line";
	t_stock_str *ptr = ft_strs_to_tab(3, x);
	while (ptr[i].str)
	{
		printf("%d %s %s\n", ptr[i].size, ptr[i].str, ptr[i].copy);
		i++;
	}
}*/		
