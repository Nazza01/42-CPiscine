#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	letter;

	i = 0;
	letter = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && letter == 1 )
		{		
			str[i] = str[i] - 32;
			++letter;
		}
		else if (str [i] < 48 || (str[i] > 57 && str [i] < 65)
			   	  || (str[i] >= 91 && str[i] <= 96) || str[i] > 122)
			letter = 1;
		else if (str [i] >= 65 && str [i] <= 90 && letter > 1 )
		{
			str[i] = str[i] + 32;
		}
		else
			++letter;
		++i;
	}
	return (str);
}
