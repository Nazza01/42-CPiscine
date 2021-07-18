#include "ft_stock_str.h"
#include <stdlib.h>
/*
Function takes the array of a string as an argument and the size of the array
*/
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	stock;
	int					i;
	char				*tempString;

	i = 0;
	*av = malloc(sizeof(char) * ac);
	if (av == NULL)
		return (&stock);
	while (av[ac + 1] != 0)
	{
		tempString[i] = *av[i];
		stock.size = ac;
		stock.str = av[0];
		stock.copy = av[1];
	}
	free(av);
	return (&stock);
}
