#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i] == 32 || (av[1][i] > 8 && av[1][i] < 14))
            i++;
        while (!(av[1][i] == 32 || (av[1][i] > 8 && av[1][i] < 14)) && av[1][i])
            write(1, &av[1][i++], 1);
    }
    write(1, "\n", 1);
    return 0;
}

// Assignment name  : first_word
// Expected files   : first_word.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays its first word, followed by a
// newline.

// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

// Examples:

// $> ./first_word "FOR PONY" | cat -e
// FOR$
// $> ./first_word "this        ...    is sparta, then again, maybe    not" | cat -e
// this$
// $> ./first_word "   " | cat -e
// $
// $> ./first_word "a" "b" | cat -e
// $
// $> ./first_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

// DESCRIPTION

// This program takes a string as input, and outputs the first word of the string(the substring of characters delimited by whitespace or control characters).

//                                           Here's how the program works:

// The program checks if it was given exactly one argument.If not,
//      it prints a newline and exits.The program initializes a counter variable i to zero.The program skips over any leading whitespace or control characters in the input string, by iterating through the string with a while loop that continues while av[1][i] is a space character or a control character(tab, newline, etc.).The program then outputs characters from the input string by iterating through the string with another while loop.This loop continues while av[1][i] is not a space character or a control character, and also not the null character that marks the end of the string.Inside the loop, the program outputs the character av[1][i] using the write() system call, and increments the counter variable i.When the loop exits, the program prints a newline character using the write() system call.The program exits with a return value of zero.