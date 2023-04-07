#include <unistd.h>

void wdmatch(char *s1, char *s2)
{
	int len = 0;
	int i = 0;

	while (s1[len])
		++len;
	while (*s2 && i < len)
		(*s2++ == s1[i]) ? ++i : 0;
	if (i == len)
		write(1, s1, len);
}

int main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string, while respecting
// the order in which these characters appear in the second string.

// If it's possible, the program displays the string, followed by a \n, otherwise
// it simply displays a \n.

// If the number of arguments is not 2, the program displays a \n.

// Examples:

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

// DESCRIPTION

// This program takes two strings as command - line arguments and prints the first string to standard output if all of its characters appear in the second string, in the order they appear in the first string.

// 																																									Here's how it works step by step:

// 																																									The program checks if there are exactly two command -
// 																																									line arguments passed to it.If there are not exactly two arguments,
// 	the program simply prints a newline character and exits.

// 	If there are exactly two arguments,
// 	the program enters a loop that iterates through each character in the first argument to determine its length.

// 	The program then enters another loop that iterates through each character in the second argument.As it does so,
// 	it checks if the current character in the second argument matches the current character in the first argument.If there is a match, the program increments the index i to the next character in the first argument.

// 																																		   After iterating through all characters in the second argument or
// 																																		   if the index i reaches the end of the first argument,
// 	the program checks if i is equal to the length of the first argument.If i is equal to the length of the first argument, it means that all characters in the first argument appear in the second argument in the same order, so the program writes the first argument to the standard output using the write system call.

// 																																																								Finally,
// 	the program prints a newline character to the standard output to end the output.