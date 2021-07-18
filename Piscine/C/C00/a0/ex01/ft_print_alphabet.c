#include <unistd.h>
#include <stdio.h>
void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	alph;
	char	newline;

	alph = 'a';
	newline = '\n';
	while (alph <= 'z')
	{
		write(1, &alph, 1);
		alph++;
	}
	write(1, &newline, 1);
}
