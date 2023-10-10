#include <unistd.h>

void	str_capitalizer(char *str)
{
	if (ac == 1)
		write(1, "\n", 1);
	int i = 0;

	if (str[i] >= 'a' && 'z' >= str[i])
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] >= 'A' && 'Z' >= str[i])
			str[i] += 32;
		if ((str[i] >= 'a' && 'z' >= str[i]) && (str[i - 1] == ' ' || \
		str[i - 1] == '\t'))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int ac, char *av[])
{
	if (ac < 2)
		write(1, "\n", 1);
	else
	{
		int i = 1;
		while (i < ac)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}

// #include <unistd.h>

// void str_capitalizer(char *str)
// {
// 	int i = 0;
// 	if (str[i] > 96 && str[i] < 123)
// 		str[i] -= 32;
// 	write(1, &str[i], 1);
// 	while (str[++i])
// 	{
// 		if (str[i] > 64 && str[i] < 91)
// 			str[i] += 32;
// 		if ((str[i] > 96 && str[i] < 123) && ((str[i - 1] > 8 && str[i - 1] < 14) || str[i - 1] == 32))
// 			str[i] -= 32;
// 		write(1, &str[i], 1);
// 	}
// }

// int main(int ac, char **av)
// {
// 	if (ac > 1)
// 	{
// 		int i = 1;
// 		while (i < ac)
// 		{
// 			str_capitalizer(av[i++]);
// 			write(1, "\n", 1);
// 		}
// 	}
// 	return (0);
// }

// Assignment name  : str_capitalizer
// Expected files   : str_capitalizer.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes one or several strings and, for each argument,
// capitalizes the first character of each word (If it's a letter, obviously),
// puts the rest in lowercase, and displays the result on the standard output,
// followed by a \n.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string. If a word only has one letter, it must be
// capitalized.

// If there are no arguments, the progam must display \n.

// Example:

// $> ./str_capitalizer | cat -e
// $
// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$
// $> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
// __second Test A Little Bit   Moar Complex$
//    But... This Is Not That Complex$
//      Okay, This Is The Last 1239809147801 But Not    The Least    T$
// $>