int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>

int main(int ac, char **av)
{
	if (ac > 1)
		printf("The length of the message is: %d\n", ft_strlen(av[1]));
	return 0;
}

// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);