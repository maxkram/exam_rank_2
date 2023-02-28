int ft_atoi_base(const char *str, int base) {
    int result = 0;
    int sign = 1;

    // Skip leading white space
    while ((*str >= 9 && *str <= 13) || *str == ' ') {
        str++;
    }

    // Handle sign
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Convert string to integer
    while (*str != '\0') {
        int digit;

        if (*str >= '0' && *str <= '9') {
            digit = *str - '0';
        } else if (*str >= 'a' && *str <= 'f') {
            digit = *str - 'a' + 10;
        } else if (*str >= 'A' && *str <= 'F') {
            digit = *str - 'A' + 10;
        } else {
            break; // Invalid character, stop parsing
        }

        if (digit >= base) {
            break; // Digit not valid in this base, stop parsing
        }

        result = result * base + digit;
        str++;
    }

    return result * sign;
}

#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int		nb;
	if (ac >= 3)
	{
		nb = ft_atoi_base(av[1], atoi(av[2]));
		printf("%d\n", nb);
	}
	return (0);
}