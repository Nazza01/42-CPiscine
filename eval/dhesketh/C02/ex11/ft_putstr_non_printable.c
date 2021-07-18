#include <unistd.h>

void	write_as_hex(int num)
{
	const int	hex_base = 16;
	int			i;
	int			hexnumbers[16];
	int			j;

	write(1, "\\", 1);
	i = 0;
	while (num != 0)
	{
		hexnumbers[i] = num % hex_base;
		num = num / hex_base;
		i++;
	}
	j = 0;
	if (i == 1)
		write(1, "0", 1);
	while (j < i)
	{
		if (hexnumbers[j] < 10)
			hexnumbers[j] += '0';
		else
			hexnumbers[j] += (-10 + 'a');
		write(1, &hexnumbers[j], 1);
		j++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 31 && str[i] < 127)
			write(1, &str[i], 1);
		else
			write_as_hex(str[i]);
		i++;
	}
}
