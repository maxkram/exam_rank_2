#include <unistd.h>

int ft_check(char *s, int max, char c)
{
	int i = -1;
	while (++i < max)
		if (s[i] == c)
			return (0);
	return (1);
}

void ft_union(char *s1, char *s2)
{
	int j = -1;
	int i = -1;
	while (s1[++i])
		if (ft_check(s1, i, s1[i]))
			write(1, &s1[i], 1);
	while (s2[++j])
		if (ft_check(s2, j, s2[j]) && ft_check(s1, i, s2[j]))
			write(1, &s2[j], 1);
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>

// DESCRIPTION

// The program takes two command - line arguments and prints the union of the characters in both arguments to the standard output.The union of two sets is the set of all elements that appear in either set(or both).

// 								Here's how it works step by step:

// 								The program checks if there are exactly two command
// 	- line arguments passed to it.If there are not exactly two arguments,
// 	the program simply prints a newline character and exits.

// 	If there are exactly two arguments,
// 	the program enters a loop that iterates through each character in the first argument.

// 	For each character in the first argument,
// 	the program checks if it has already been printed to the standard output by calling the ft_check function with the character and the current position in the string as arguments.If the character has not been printed yet, the program writes the character to the standard output using the write system call.

// 																																																								The program then enters a second loop that iterates through each character in the second argument.

// 																																																								For each character in the second argument,
// 	the program checks if it has already been printed to the standard output and if it appears in the first argument by calling the ft_check function with the character, the current position in the string, and the first argument as arguments.If the character has not been printed yet and does not appear in the first argument, the program writes the character to the standard output using the write system call.

// 																																																																																	   The loop continues until all characters in both arguments have been processed.

// 																																																																																	   Finally,
// 	the program prints a newline character to the standard output to end the output.