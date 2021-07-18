#include	<stdlib.h>
#include	"ft_stock_str.h"

int	str_len(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
	}
	dest[index] = '\0';
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*table;
	int			index;

	table = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc + 1));
	if (table == NULL)
		return (0);
	index = 0;
	while (index < argc)
	{
		table[index].size = str_len(argv[index]);
		table[index].str = (char *)malloc(table[index].size + 1);
		table[index].copy = (char *)malloc(table[index].size + 1);
		ft_strcpy(table[index].str, argv[index]);
		ft_strcpy(table[index].copy, argv[index]);
		index++;
	}
	table[index].str = 0;
	return (table);
}
