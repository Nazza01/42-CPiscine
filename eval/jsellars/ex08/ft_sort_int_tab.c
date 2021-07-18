void	swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	iterator;

	iterator = 0;
	i = 0;
	k = 1;
	while (iterator < (size - 1))
	{
		while (i < size)
		{
			if (tab[i] > tab[k])
			{
				swap(&tab[i], &tab[k]);
			}
			i++;
			k++;
		}
		size--;
		i = 0;
		k = 1;
	}
}
