#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if (av[1][i] > 64 && av[1][i] < 91)
				av[1][i] += 32;
			else if (av[1][i] > 96 && av[1][i] < 123)
				av[1][i] -= 32;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : ulstr
// Expected files   : ulstr.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and reverses the case of all its letters.
// Other characters remain unchanged.

// You must display the result followed by a '\n'.

// If the number of arguments is not 1, the program displays '\n'.

// Examples :

// $>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
// l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
// $>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
// s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
// $>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
// 3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
// $>./ulstr | cat -e
// $

// DESCRIPTIION
// The program takes a single command - line argument and converts all uppercase letters in the argument to lowercase letters, and all lowercase letters to uppercase letters.It then prints the result to the standard output.

// 																																Here's how it works step by step:

// 																																The program checks if there is exactly one command -
// 																																line argument passed to it.If there is not exactly one argument,
// 	the program simply prints a newline character and exits.

// 	If there is exactly one argument,
// 	the program enters a loop that iterates through each character in the argument.

// 	For each character in the argument,
// 	the program checks if it is an uppercase letter(ASCII values 65 to 90).If it is, it adds the value of the ASCII space character(32) to the character, effectively converting it to its lowercase equivalent.If the character is a lowercase letter(ASCII values 97 to 122), the program subtracts the value of the ASCII space character from it, effectively converting it to its uppercase equivalent.

// 																																																																																					  After converting the letter case (if applicable),
// 	the program writes the current character to the standard output using the write system call.

// 	The loop continues until all characters in the argument have been processed.

// 	Finally,
// 	the program prints a newline character to the standard output to end the output.