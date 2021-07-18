//////////////////////////////////////////////////////////
//	This main tests C03 ex00 - ex05						//
//														//
//	If there are missing exercises, comment out their	//
//	declaration and usage in this main.					//
//														//
//	Conflicting function names can cause issues.		//
//	Change them in the exercises to resolve this.		//
//														//
//	e.g. ft_putchar(char c) -> ft_putchar1(char c)		//
//														//
//	For support or feedback, post a message in the		//
//	discord.											//
//														//
//	Solarcode | thardy									//
//////////////////////////////////////////////////////////

#include <stdio.h> // Used for printf
#include <unistd.h>
extern int	ft_strcmp(char *s1, char *s2); // ex00
extern int	ft_strncmp(char *s1, char *s2, unsigned int n); // ex01
extern char	*ft_strcat(char *dest, char *src); // ex02
extern char	*ft_strncat(char *dest, char *src, unsigned int nb); // ex03
extern char	*ft_strstr(char *str, char *to_find); // ex04
extern unsigned int	ft_strlcat(char *dest, char *src, unsigned int size); // ex05

int	main(void)
{
	char	string1[20] = "abcdef";
	char	string2[] = "ghijkl";
	char	string3[] = "abc";

//	ex00:
	printf("-------------------------------\nex00:	ft_strcmp\n-------------------------------\nExpected output:	1, 0, -1\nActual output:		%d, %d, %d\n\n", ft_strcmp(string1, string3), ft_strcmp(string1, string1), ft_strcmp(string3, string1));

//	ex01:
	printf("-------------------------------\nex01:	ft_strncmp\n-------------------------------\nExpected output:	1, 0, -1\nActual output:		%d, %d, %d\n\n", ft_strncmp(string1, string3, 5), ft_strncmp(string1, string3, 3), ft_strncmp(string1, string2, 3));

//	ex02:
	printf("-------------------------------\nex02:	ft_strcat\n-------------------------------\nExpected output:	abcdefghijkl\nActual output:		%s\n\n", ft_strcat(string1, string2));

//	ex03:
	char	s1[20] = "abcdef";
	char	s2[] = "ghijkl";
	printf("-------------------------------\nex03:	ft_strncat\n-------------------------------\nExpected output:	abcdefghi\nActual output:		%s\n\n", ft_strncat(s1, s2, 3));

//	ex04:
	char *find = "abcdefg";
	printf("-------------------------------\nex04:	ft_strstr\n-------------------------------\nExpected output:	abc\nActual output:		%s\n\n", ft_strstr(find, "abc"));

}
