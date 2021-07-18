#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dup = (char *)malloc(sizeof(char) * i);
	if (dup == NULL)
	{
		return (0);
	}	
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

struct s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	t_stock_str	*final;
	int			i;

	i = 0;
	final = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * ac);
	if (final == NULL)
	{
		return (0);
	}
	while (i < ac)
	{
		final[i].size = ft_strlen(av[i]);
		final[i].str = av[i];
		ft_strdup(av[i]);
		final[i].copy = ft_strdup(av[i]);
		i++;
	}
	final[i].str = 0;
	return (final);
}
