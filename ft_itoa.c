#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
	int n = nbr;
	int len = 0;

	if (nbr == -2147483648)
		return ("-2147483648");

	if (nbr < 0)
		len++;

	while (n)
	{
		n /= 10;
		len++;
	}

	char *result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return NULL;

	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}

	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return result;
}

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

// DESCRIPTION
// The code defines a function ft_itoa that converts an integer into a string representation of that integer. The function takes an integer as input and returns a pointer to a string.

// The function first declares some variables including len to keep track of the length of the integer string, n_tmp to hold a copy of the integer, and str to point to a dynamically allocated array that will hold the resulting string.

// The function then checks for some corner cases. If the integer is the minimum value of a 32-bit signed integer, then it returns "-2147483648" as a string. If the malloc() function failed to allocate memory for the string, the function returns NULL.

// The function then checks if the integer is negative. If so, it increments the len variable and negates the integer. This is to account for the negative sign character that will be included in the resulting string.

// The function then iterates through the integer to determine its length. It divides the integer by 10 until it reaches zero while incrementing the len variable. This gives the length of the string representation of the integer.

// The function then iterates through the integer again to fill in the string with the digits of the integer. It uses the modulo operator to get the last digit of the integer, converts it to a character and stores it in the string array. Then it divides the integer by 10 to remove the last digit.

// Once the string is filled, the function returns a pointer to it.

// The main() function simply calls ft_itoa with different integers and prints out the resulting string.