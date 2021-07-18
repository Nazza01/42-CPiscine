#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	int		a;
	int		*ptr;

	a = 100;
	ptr = &a;
	printf("a:\t%i\n", a);
	printf("&a:\t%p\n", &a);
	printf("ptr:\t%p\n", ptr);
	printf("*ptr:\t%i\n", *ptr);
	printf("&ptr:\t%p\n", &ptr);
	return (0);
}
