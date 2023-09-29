#include <unistd.h>

int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if (ac == 3)
	{
		while (av[2][j] && av[1][i])
		{
			if (av[2][j] == av[1][i])
				i++;
			j++;
		}
		if (av[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : hidenp
// Expected files   : hidenp.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program named hidenp that takes two strings and displays 1
// followed by a newline if the first string is hidden in the second one,
// otherwise displays 0 followed by a newline.

// Let s1 and s2 be strings. We say that s1 is hidden in s2 if it's possible to
// find each character from s1 in s2, in the same order as they appear in s1.
// Also, the empty string is hidden in any string.

// If the number of parameters is not 2, the program displays a newline.

// Examples :

// $>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
// 1$
// $>./hidenp "abc" "2altrb53c.sse" | cat -e
// 1$
// $>./hidenp "abc" "btarc" | cat -e
// 0$
// $>./hidenp | cat -e
// $
// // $>

// This is a simple C program that compares two strings passed as command - line arguments and outputs "1" if the first string contains all the characters in the second string, and"0" otherwise.The program uses the POSIX library function write() to print the result to the standard output.

// Here is a breakdown of how the program works :

// 	The program starts by including the unistd.h header file which contains the declaration of the write() function.

// 	The main() function takes two arguments : ac which represents the number of command - line arguments passed to the program,
// 	and av which is an array of strings representing the command - line arguments.

// The program first declares two integer variables i and j and initializes them to 0.

// The program then checks if the number of command
//  		- line arguments is equal to 3. If not,
//  	it simply prints a newline character and exits.

// 		If the number of command
// 		- line arguments is 3,
// 	the program enters a loop that compares the characters in the two strings.The loop continues as long as both strings have not been fully traversed, i.e.av[2][j] and av[1][i] are not '\0'.

// In the loop,
//  	the program compares the current character of the second string(av[2][j]) with the current character of the first string(av[1][i]).If they match, the program increments the index i, which represents the current position in the first string.The program then increments the index j, which represents the current position in the second string.

// After the loop completes,
// the program checks if the first string has been fully traversed, i.e.if av[1][i] is '\0'.If it is, then the first string contains all the characters in the second string, and the program writes "1" to the standard output using the write() function.Otherwise, the first string does not contain all the characters in the second string, and the program writes "0" to the standard output.

// Finally,
// the program writes a newline character to the standard output and returns 0 to indicate successful completion.

// 	Overall,
// 	this program performs a basic string comparison and output operation using the write() function from the POSIX library.