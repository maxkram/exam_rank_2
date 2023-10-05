int ft_atoi(const char *str)
{
	int res = 0;
	int sign = 1;
	while (*str == ' ' || (*str > 8 && *str < 14))
		str++;
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		res = res * 10 + *str++ - '0';
	return (sign * res);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\n", ft_atoi("5"));
	printf("atoi: %d\n", atoi("5"));
	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("atoi: %d\n", atoi("2147483647"));
	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
	printf("atoi: %d\n", atoi("-2147483648"));
	return (0);
}

// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);