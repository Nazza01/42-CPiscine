#include <unistd.h>

void	write_as_hex(unsigned int address, int padding)
{
	const int	BASE_16 = 16;
	char		str[BASE_16];
	int			i;
	int			digit;
	char		c;

	i = padding - 1;
	while (i >= 0)
	{
		digit = address % BASE_16;
		if (digit < 10)
			c = digit + '0';
		else
			c = digit + ('a' - 10);
		str[i] = c;
		address /= BASE_16;
		i -= 1;
	}
	write(1, str, padding);
}

void	write_data_block(char *data_address, int size)
{
	int		i;
	char	data_block;

	i = 0;
	while (i < 16)
	{
		if (i >= size)
			write(1, "  ", 2);
		else
		{
			data_block = data_address[i];
			write_as_hex(data_block, 2);
		}
		i++;
		if (i >= size)
			write(1, "  ", 2);
		else
		{
			data_block = data_address[i];
			write_as_hex(data_block, 2);
		}
		i++;
		write(1, " ", 1);
	}
}

void	write_string_output(char *data_address, int size)
{
	int	i;

	i = 0;
	while (i < 16 && i < size)
	{
		if (data_address[i] < ' ' || data_address[i] > '~')
			write(1, ".", 1);
		else
			write(1, &data_address[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	address;
	char			*data_address;

	if (size == 0)
		return (addr);
	 data_address = (char *)addr;
	while (size > 0)
	{
		address = (unsigned int)data_address;
		write_as_hex(address, 16);
		write(1, ": ", 2);
		write_data_block(data_address, size);
		write_string_output(data_address, size);
		write(1, "\n", 1);
		if (size > 16)
			size -= 16;
		else
			size = 0;
		data_address = data_address + 16;
	}
	return (addr);
}
