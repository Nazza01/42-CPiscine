void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	temp_value;

	first = 0;
	last = size - 1;
	while (last >= first)
	{
		temp_value = tab[first];
		tab[first] = tab[last];
		tab[last] = temp_value;
		first++;
		last--;
	}
}
