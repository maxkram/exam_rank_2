int ft_atoi_base(const char *str, int base) {
    int result = 0;
    int sign = 1;

    while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
    if (*str++ == '-')
        sign = -1;
    else if (*str == '+')
        str++;
    while (*str)
    {
        int digit;

        if (*str >= '0' && *str <= '9')
            digit = *str - '0';
        else if (*str >= 'a' && *str <= 'f')
            digit = *str - 'a' + 10;
        else if (*str >= 'A' && *str <= 'F')
            digit = *str - 'A' + 10;
        else
            break;

        if (digit >= base)
            break;

        result = result * base + digit;
        str++;
    }

    return (result * sign);
}

#include <stdlib.h>
#include <stdio.h>

int		main(void)
{
	printf("%d\n", ft_atoi_base("011", atoi("2")));
	printf("%d\n", ft_atoi_base("16", atoi("8")));
	printf("%d\n", ft_atoi_base("123", atoi("10")));
	printf("%d\n", ft_atoi_base("FF", atoi("16")));
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