#include <unistd.h>

int ft_atoi(char *s)
{	
	int sgn = 1;
	int res = 0;
	if (*s == '-')
	{
		sgn = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		res = res * 10 + *s++ - '0';
	return (res * sgn);
}

void ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

int is_prime(int n)
{
	int i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
		return (n % i == 0) ? 0 : i++;
	return (1);
}

int main(int ac, char **av)
{
	if (ac != 2)
		ft_putnbr(0);
	else
	{
		int sum = 0;
		int n = ft_atoi(av[1]);

		if (n < 0)
		{
			write(1, "0\n", 2);
			return (0);
		}
		else
		{
			while (n > 0)
				if (is_prime(n--))
					sum += n + 1;
			ft_putnbr(sum);
		}
	}

	write(1, "\n", 1);
	return (0);
}

// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

// DESCRIPTION
// This is a program that takes an argument (a positive integer) and calculates the sum of all prime numbers less than or equal to the given number.

// The program starts by defining three functions:

// ft_atoi function is used to convert a string to an integer.
// It starts by skipping all white spaces (space, newline, tab, etc.) in the beginning of the string using a while loop.
// Then, it checks if the first character is a minus sign (-) and sets a sign variable to -1 accordingly.
// Then, it skips any plus (+) or minus (-) signs that may appear after the first character.
// Finally, it multiplies the result by 10 and adds the integer representation of each character until a non-digit character is encountered.
// ft_putnbr function is used to output an integer to the standard output.
// It uses recursion to output the digits of the integer from left to right.
// The base case is when the integer is less than 10. In this case, it outputs the corresponding character to the standard output.
// Otherwise, it recursively outputs the digits of the integer divided by 10, then outputs the last digit.
// is_prime function checks if a given integer is a prime number.
// It first checks if the integer is less than or equal to 1, and returns 0 if so since 1 is not a prime number.
// Then, it uses a while loop that iterates from 2 to the square root of the integer.
// For each iteration, it checks if the integer is divisible by the current number. If so, it returns 0 since the integer is not a prime number.
// If the loop completes without returning 0, it means that the integer is a prime number and returns 1.
// The main function starts by checking if the number of arguments is 2. If so, it calls ft_atoi to convert the second argument to an integer and stores it in n. Then, it loops through all numbers less than or equal to n, and for each number, it checks if it's a prime number using is_prime function. If so, it adds it to sum. Finally, it calls ft_putnbr to output the value of sum.

// If the number of arguments is not 2, the program outputs 0 using ft_putnbr. In both cases, it outputs a newline character at the end.