#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_str_is_alpha(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_uppercase(char *str);
int	ft_str_is_printable(char *str);
char	*ft_strupcase(char *str);
char	*ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);

int	main(void)
{
	unsigned int	n = 7;
	char source[] = "hello Mofo";
	char destination[100] = "bonjour tout le monde";
	char destinationstrncpy[100] = "bonjour tout le monde";
	char alphatest1[] = "onlyletter";
   	char alphatest2[] = "onl255etter";	
	char digitstest1[] = "168646468465420";
	char digitstest2[] = "00sertrwt151519";
	char lowercasetest[] = "abcdefghijklmnopqrstuvwxyz";
	char lowercasetest2[] = "ASfeewf48";
	char uppercase[] = "ABCDEFGHIJKLMNPQRSTUVWXYZ";
	char uppercasetest2[] = "ABCDEFGHIJKLMN1QRSTUVWXYZ";
	char printable[] = " !@#$#%^&^*() ";
	char printabletest2[] = "16516©øqw";
	char testup[] = "abcdefghijklmnopqrstuvwxyz";
	char testlow[] = "ABCDEFGHIJKLMNPQRSTUVWXYZ";
	char testcap[] = "aFRa aaFEW 22g GWR";

	printf("\nsource = %s;\ndestination = %s;\ndestinationStrncpy = %s;\ntestsrc = %d;\n",source,destination,destinationstrncpy,n);
	printf("\n00 ft_strcpy :  ");
	ft_strcpy(destination, source);
	printf("%s\n\n",destination);
	
	printf("01 ft_strncpy  testsrc %d :  ",n);
	ft_strncpy(destinationstrncpy, source, n);
	printf("%s\n\n",destinationstrncpy);	

	printf("02 ft_str_is_alpha  :   ");
	printf("only letter -> %d  //",ft_str_is_alpha(alphatest1));
	printf("  not only letter -> %d\n\n",ft_str_is_alpha(alphatest2));

	printf("03 ft_str_is_numeric  :   ");
	printf("only digits -> %d  //",ft_str_is_numeric(digitstest1));
	printf("  not only digits -> %d\n\n",ft_str_is_numeric(digitstest2));
	

	printf("04 ft_str_is_lowercase  :   ");
	printf("only lowercase -> %d  //",ft_str_is_lowercase(lowercasetest));
	printf("  not only lowercase -> %d\n\n",ft_str_is_lowercase(lowercasetest2));
	

	printf("05 ft_str_is_uppercase  :   ");
	printf("only uppercase -> %d  //",ft_str_is_uppercase(uppercase));
	printf("  not only uppercase -> %d\n\n",ft_str_is_uppercase(uppercasetest2));
	
	
	printf("06 ft_str_is_printable  :   ");
	printf("only printable -> %d  //",ft_str_is_printable(printable));
	printf("  not only printable -> %d\n\n",ft_str_is_printable(printabletest2));
	
	printf("07 ft_strupcase  :   ");
	printf("abcdefghijklmnopqrstuvwxyz --> : %s\n\n",ft_strupcase(testup));
	
	printf("08 ft_strlowcase  :   ");
    printf("ABCDEFGHIJKLMNPQRSTUVWXYZ --> : %s\n\n",ft_strlowcase(testlow));

	printf("09 ft_strcapitalize  :   ");
    printf("aFRaaaFEW22gGWR --> : %s\n\n",ft_strcapitalize(testcap));
    
	return (0);
}
