#include <unistd.h>

int ft_check(char *str, char c, int len)
{
	int j = 0;
	while (j < len)
	{
		if (str[j] == c)
			return (0);
		j++;
	}
	return (1);
}

void ft_inter(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (ft_check(s1, s1[i], i))
		{
			int j = 0;
			while (s2[j])
			{
				if (s2[j] == s1[i])
				{
					write(1, &s1[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_inter(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

// This is a C program that takes two strings as arguments, and then outputs any characters that appear in both strings.

// The program begins by defining a function called ft_check, which takes in a string str, a character c, and an integer len. This function is used to check whether a given character c appears in the first len characters of string str. If the character is found, ft_check returns 0, indicating that the character is not unique in the first len characters of the string. If the character is not found, ft_check returns 1, indicating that the character is unique in the first len characters of the string.

// Next, the program defines a function called ft_inter, which takes in two strings s1 and s2. This function iterates through each character in the first string s1, using ft_check to determine whether the character appears only once in the first i characters of the string (where i is the current position of the iteration). If the character is unique in the first i characters of the string, the function then iterates through each character in the second string s2, looking for any matches with the current character in s1. If a match is found, the program outputs the matching character using the write function.

// Finally, the program defines a main function that takes in two string arguments, checks that two arguments were provided using if (ac == 3), and then calls the ft_inter function with the two provided string arguments. The program then outputs a newline character using the write function and returns 0 to indicate successful completion.

// Overall, this program is a simple implementation of string comparison and outputting using standard C functions.