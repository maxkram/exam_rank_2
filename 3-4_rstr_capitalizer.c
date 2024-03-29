#include <unistd.h>

int is_space(char c)
{
	return(c == 32 || c == 9 || c == '\0');
}

int main(int ac, char **av)
{
	if (ac < 2)
		write(1, "\n", 1);
	int x = 0;
	while (++x < ac)
	{
		int i = 0;
		while(av[x][i])
		{
			if (av[x][i] >= 'A' && av[x][i] <= 'Z' && !is_space(av[x][i + 1]))
				av[x][i] += 32;
			else if (av[x][i] >= 'a' && av[x][i] <= 'z' && is_space(av[x][i + 1]))
				av[x][i] -= 32;
			write(1, &av[x][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

// Assignment name  : rstr_capitalizer
// Expected files   : rstr_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or more strings and, for each argument, puts
// the last character that is a letter of each word in uppercase and the rest
// in lowercase, then displays the result followed by a \n.

// A word is a section of string delimited by spaces/tabs or the start/end of the
// string. If a word has a single letter, it must be capitalized.

// A letter is a character in the set [a-zA-Z]

// If there are no parameters, display \n.

// Examples:

// $> ./rstr_capitalizer | cat -e
// $
// $> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A firsT littlE tesT$
// $> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// seconD tesT A littlE biT   moaR compleX$
//    but... thiS iS noT thaT compleX$
//      okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
// $>