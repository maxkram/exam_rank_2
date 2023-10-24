char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0'; // 10 || 2 || 8 + '0' = '10' || '2' || '8'
	else
		max_digit = digits_in_base - 10 + 'a'; // 16 - 10 + 'a' = 6 + 'a' = 'e'

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0'); // 0, 1, 2, 3
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a'); // 10 + 'b || c || e - 'a' = 11, 12, 13
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base + (digit * sign);
		str++;
	}
	return (result);
}

#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], atoi(av[2])));//
	return (0);
}

// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);