#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

/*
	Modulo
	13 / 5 = 2.6
		2 is the result of the division
		.6 you times by 5 to get the modulo of 13 mod(%) 5
			e.g 0.6 * 5 = 3
		So 13 % 5 equals 3
	In the context of the question:
		As we are testing using '42'
		It goes 42 % 10 which equals 2
			We want to add the ascii value 48 as we go so each value is diplayed
		As we can't really work with double digits in ascii we want to divide by 10
			e.g; 
				42 / 10 = 4.2 
					+ 48 = 52
				Which equals 2 in ascii
*/
void	ft_putnbr(int nb)
{
	int	tenDigit;
	int	asciiZero;

	tenDigit = 10;
	asciiZero = 48;
	if (nb >= tenDigit)
	{
		ft_putchar((nb / tenDigit) + asciiZero);
		ft_putchar((nb % tenDigit) + asciiZero);
	}
	else if (nb < tenDigit)
	{
		ft_putchar((nb % tenDigit) + asciiZero);
	}
	else if (nb < 0)
		ft_putchar(-nb);
}