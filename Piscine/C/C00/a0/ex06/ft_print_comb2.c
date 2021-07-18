#include <unistd.h>
void	ft_printInt(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int		numb[4];
	int		iter1;

	numb[0] = 0;
	numb[1] = 0;
	numb[2] = 0;
	numb[3] = 1;
	iter1 = 0;
	while (numb[0] <= 9)
	{
		while (numb[1] <= 8)
		{
			while (numb[2] <= 9)
			{
				while (numb[3] <= 9)
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
