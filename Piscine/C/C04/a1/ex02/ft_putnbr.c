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
	Make an unsigned integer to handle large negative or positive values inputted
	If nb is lower than 0
		output a '-' char
		make i to be the unsigned integer
	Else
		make i to be nb
	If the unsigned integer is greater or equal to 10
		use recusion to call the function but divide by 10 to do the next decimal value
			10 becomes 1 until we run out
		Call the putchar to output the unsigned int using the write() function
*/
void	ft_putnbr(int nb)
{
	unsigned int	i;

	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
		i = nb;
	if (i >= 10)
		ft_putnbr(i / 10);
	ft_putchar(i % 10 + 48);
}
