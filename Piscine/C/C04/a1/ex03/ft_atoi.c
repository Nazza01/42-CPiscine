/*
atoi()
	iterator through the string
	asciiZero = 48 in ascii
	result = 0
	posNeg = 1 (as we want to times it)
	looking at the isspace and check between \t and \r (as well as space chars)
	we want to detect the negative char and assign pos or neg using posNeg
		will mulitply the result by posNeg
	while the current char is between 0 and 9 and it isn't the null char
		assign result to be current char - asciiZero (48) + result * 10
			mulitply it by 10 to move to the next digit
			1 goes to 10 so that we can re-assign 0 to a result between 1 or 9
	Want to times the posNeg value by result assign a negative value if detected 
*/
int	ft_atoi(char *str)
{
	int	i;
	int	asciiZero;
	int	result;
	int	posNeg;

	i = 0;
	asciiZero = 48;
	result = 0;
	posNeg = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			posNeg *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = (str[i] - asciiZero) + (result * 10);
		i++;
	}
	return (result * posNeg);
}
