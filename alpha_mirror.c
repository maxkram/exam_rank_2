#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			// for lower case a+z - var
			if (av[1][i] > 64 && av[1][i] < 91)
				av[1][i] = 65 + 90 - av[1][i];
			// for upper case a+z - var
			else if (av[1][i] > 96 && av[1][i] < 123)
				av[1][i] = 97 + 122 - av[1][i];
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : alpha_mirror // Expected files   : alpha_mirror.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.

// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'

// and so on.

// Case is not changed.

// If the number of arguments is not 1, display only a newline.

// Examples:

// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>