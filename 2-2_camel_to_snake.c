#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] > 64 && av[1][i] < 91)
			{
				av[1][i] += 32;
				write(1, "_", 1);
			}
			write(1, &av[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, realloc, write
// --------------------------------------------------------------------------------

// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.

// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.

// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".

// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
// $

// DESCRIPTION

// This program takes one argument from the command line and replaces all uppercase letters in the string with their lowercase equivalent and adds an underscore character('_') before each converted uppercase letter.

// 	The main function first initializes an integer variable i to zero.Then it checks if the program was run with exactly one argument(ac == 2)
// 		.If there is only one argument,
// 	the program proceeds to a loop that iterates over each character of the argument string(av[1][i]).

// 	For each character in the string,
// 	the program checks if it is an uppercase letter(if (av[1][i] > 64 && av[1][i] < 91)).If it is, the program adds 32 to the ASCII value of the character to convert it to lowercase(av[1][i] += 32) and then writes an underscore character to the standard output(write(1, "_", 1)).The program then writes the converted character to the standard output(write(1, &av[1][i++], 1)).

// 																																																		  Finally,
// 	if the program was run with an incorrect number of arguments, the program writes a newline character to the standard output(write(1, "\n", 1)), and returns 0.