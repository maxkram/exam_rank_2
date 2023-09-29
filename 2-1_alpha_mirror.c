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
				av[1][i] = 90 - (av[1][i] + 65);
			// for upper case a+z - var
			else if (av[1][i] > 96 && av[1][i] < 123)
				av[1][i] = 122 - (av[1][i] + 97);
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

// DESCRIPTION

// This program takes a single command-line argument and converts each character in the argument to its "mirror" character in the alphabet. If the character is a lowercase letter between 'a' and 'z', its mirror is the lowercase letter that is the same distance from 'a' as the original letter is from 'z' (e.g. 'a' maps to 'z', 'b' maps to 'y', etc.). If the character is an uppercase letter between 'A' and 'Z', its mirror is the uppercase letter that is the same distance from 'A' as the original letter is from 'Z' (e.g. 'A' maps to 'Z', 'B' maps to 'Y', etc.). All non-letter characters are left unchanged.

// The program uses a while loop to iterate through each character in the argument string, checking each character to see if it is a letter and if so, whether it is uppercase or lowercase. If it is uppercase, it calculates the ASCII code for the corresponding mirrored character and sets the current character in the string to that value. If it is lowercase, it performs the same calculation but adds 32 (the difference between the ASCII values of 'a' and 'A') before setting the current character to the result.

// Finally, after all characters in the string have been processed, the program writes a newline character to the standard output before exiting.