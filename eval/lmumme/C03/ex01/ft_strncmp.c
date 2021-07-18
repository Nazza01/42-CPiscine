int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	ret;

	while (!(*s1 - *s2) && *s2 && --n)
		s1 += 1 + (*(s2++) & 0);
	ret = *s1 - *s2;
	return ((ret > 0) - (ret < 0));
}
