#include <stdlib.h>

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dest = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*arr_str;

	i = 0;
	arr_str = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (arr_str == NULL)
		return (NULL);
	while (i < ac)
	{
		arr_str[i].size = ft_strlen(av[i]);
		arr_str[i].str = av[i];
		arr_str[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr_str[i].str = 0;
	return (arr_str);
}
