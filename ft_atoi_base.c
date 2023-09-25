// char	to_lower(char c)
// {
// 	if (c >= 'A' && c <= 'Z')
// 		return (c + ('a' - 'A'));
// 	return (c);
// }

// int get_digit(char c, int digits_in_base)
// {
// 	int max_digit;
// 	if (digits_in_base <= 10)
// 		max_digit = digits_in_base + '0';
// 	else
// 		max_digit = digits_in_base - 10 + 'a';

// 	if (c >= '0' && c <= '9' && c <= max_digit)
// 		return (c - '0');
// 	else if (c >= 'a' && c <= 'f' && c <= max_digit)
// 		return (10 + c - 'a');
// 	else
// 		return (-1);
// }

// int ft_atoi_base(const char *str, int str_base)
// {
// 	int result = 0;
// 	int sign = 1;
// 	int digit;

// 	if (*str == '-')
// 	{
// 		sign = -1;
// 		++str;
// 	}

// 	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
// 	{
// 		result = result * str_base + (digit * sign);
// 		++str;
// 	}
// 	return (result);
// }

// #include <stdlib.h>
// #include <stdio.h>

// int main(void)
// {
// 	printf("%d\n", ft_atoi_base("011", 2));
// 	printf("%d\n", ft_atoi_base("16", 8));
// 	printf("%d\n", ft_atoi_base("123", 10));
// 	printf("%d\n", ft_atoi_base("FF", 16));
// 	return (0);
// }

int		ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int n = 1;
	int result = 0;

	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i])
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		i++;
	}
	return (result * n);
}

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("011", 2));
	printf("%d\n", ft_atoi_base("16", 8));
	printf("%d\n", ft_atoi_base("123", 10));
	printf("%d\n", ft_atoi_base("FF", 16));
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