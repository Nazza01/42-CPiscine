#include <stdlib.h>
#include <errno.h>
/*
ft_strdup takes in a character pointer as an argument.
It will attempt to memory allocate using a char malloc.
If malloc does not work it will return a NULL pointer and exit.
Will assign a temp variable to the source and increment until the null char.
Assigns a null terminating character to the end of the temp string.
Returns the temp variable which is either filled up, or null.
*/
char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*temp;

	i = 0;
	length = 1;
	while (src[length] != '\0')
		length++;
	temp = malloc(sizeof(char) * length);
	if (temp == NULL)
		errno = ENOENT;
	else
	{
		while (src[i] != '\0')
		{
			temp[i] = src[i];
			i++;
		}
		temp[i] = '\0';
	}
	return (temp);
}
