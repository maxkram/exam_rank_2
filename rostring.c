#include <unistd.h>

int ft_check(char c)
{
	return (c == ' ' || c == '\t') ? 1 : 0;
}

void rostring(char *str)
{
	int i = 0;
	int k;

	if (*str)
	{
		while (ft_check(str[i]))
			i++;
		k = i;
		while (str[i] && !ft_check(str[i]))
			i++;
		while (str[i])
		{
			if (str[i] && !(ft_check(str[i])) && (ft_check(str[i - 1])))
			{
				while (str[i] && !(ft_check(str[i])))
					write(1, &str[i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (str[k] && !(ft_check(str[k])))
			write(1, &str[k++], 1);
	}
}

int main(int ac, char *av[])
{
	if (ac > 1)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>