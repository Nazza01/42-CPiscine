/*
	Takes in two strings as arguments and swaps them
*/
void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
