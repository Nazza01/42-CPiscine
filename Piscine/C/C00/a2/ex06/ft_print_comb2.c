#include <unistd.h>
void	ft_printInt(char a, char b, char c, char d)
{
	if (a == 57 && b == 56 && c == 57 && d == 57)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	char	numb[4];
	int		iter;

	iter = 0;
	numb[0] = 48;
	numb[1] = 48;
	numb[2] = 48;
	numb[3] = 49;
	while (numb[0] <= 57)
	{
		while (numb[1] <= 56)
		{
			while (numb[2] <= 57)
			{
				while (numb[3] <= 57)
				{
					ft_printInt(numb[0], numb[1], numb[2], numb[3]);
					numb[3]++;
				}
				numb[2]++;
			}
			numb[1]++;
		}
		numb[0]++;
	}
}
