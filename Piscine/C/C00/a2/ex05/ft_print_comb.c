#include <unistd.h>
void	ft_print_comb(void);
void	ft_print(char first, char second, char third);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 48;
	while (a <= 55)
	{
		b = a + 1;
		while (b <= 56)
		{
			c = b + 1;
			while (c <= 57)
			{
				ft_print(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print(char first, char second, char third)
{
	if (first != 55 || second != 56 || third != 57)
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
		write(1, ", ", 2);
	}
	else
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
	}
}
