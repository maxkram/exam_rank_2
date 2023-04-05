#include <stdlib.h>

char *ft_itoa(int nbr)
{
	// variables
	int len = 0;
	long n_tmp = nbr;
	char *str = (char *)malloc(sizeof(char) * len + 1);
	// the corner case
	if (nbr == -2147483648)
		return ("-2147483648");
	// error with malloc
	if (!str)
		return (NULL);
	// end of the line
	str[len] = '\0';
	// if zero length
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	// if negative
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
		str[0] = '-';
	}
	// finding the length
	while (n_tmp)
	{
		n_tmp /= 10;
		len++;
	}
	// fill the str
	while (nbr)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	// et voila
	return (str);
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", ft_itoa(33));
	printf("%s\n", ft_itoa(-33));
	printf("%s\n", ft_itoa(12345));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(98765));
	printf("%s\n", ft_itoa(-98765));
	printf("%s\n", ft_itoa(45));
	printf("%s\n", ft_itoa(-45));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
	return (0);
}

// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);