#include <unistd.h>

int sp(char c)
{
	return (c==32||c==9||c=='\0');
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i])
            i++;
        while (i >= 0)
        {
            while (av[1][i] == '\0' || av[1][i] == 32 || av[1][i] == 9)
                i--;
            int end = i;
            while (av[1][i] && av[1][i] != 32 && av[1][i] != 9)
                i--;
            int start = i + 1;
            int flag = start;
            while (start <= end)
                write(1, &av[1][start++], 1);
            if (flag != 0)
                write(1, " ", 1);
        }
        write(1,"\n",1);
        return 0;
    }
    write(1, "\n", 1);
    return (0);
}

// Assignment name  : rev_wstr
// Expected files   : rev_wstr.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string as a parameter, and prints its words in
// reverse order.

// A "word" is a part of the string bounded by spaces and/or tabs, or the
// begin/end of the string.

// If the number of parameters is different from 1, the program will display
// '\n'.

// In the parameters that are going to be tested, there won't be any "additional"
// spaces (meaning that there won't be additionnal spaces at the beginning or at
// the end of the string, and words will always be separated by exactly one space).

// Examples:

// $> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$
// $>./rev_wstr "abcdefghijklm"
// abcdefghijklm
// $> ./rev_wstr "Wingardium Leviosa" | cat -e
// Leviosa Wingardium$
// $> ./rev_wstr | cat -e
// $
// $>

// DESCRIPTION
// This program is a simple implementation of a function that takes a string as an argument and prints the words in the string in reverse order. The function uses command-line arguments and the standard C library function write() to output the result.

// Here is how the program works :

// 	The program first checks if the number of command -
// 	line arguments is 2(i.e., the program name and the string to reverse).If not,
// 	the program does nothing and exits.

// 	The program then initializes some variables,
// 	including start and end, which are used to keep track of the beginning and end of each word, and i, which is used to iterate over the string.

// The program then iterates over the string from the end to the beginning,
// 	skipping any whitespace characters(spaces and tabs).

// 		When a non
// 		- whitespace character is found,
// 	the program updates the end variable to point to the current character and continues iterating until the start of the current word is found.

// 	Once the start of the current word is found,
// 	the program sets the start variable to the current index plus one(since the current index points to a whitespace character), and then iterates over the characters of the current word, printing them out one by one using write().

// After printing the current word,
// 	the program checks if the previous word was printed(i.e., if flag is not 0).If so, the program prints a space character to separate the words.

// After iterating over the entire string,
// 	the program outputs a newline character using write().

// 	Note that this program does not use dynamic memory allocation,
// 	so it does not need to free any memory.