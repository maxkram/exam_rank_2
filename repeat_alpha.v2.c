#include <unistd.h>

int letter_count(char c)
{
	int repeat;
	if (c > 'A' && c < 'Z')
		repeat = c - 'A' + 1;
	else if (c > 'a' && c < 'z')
		repeat = c - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main (int argc, char **argv)
{
	int repeat;
	int i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat = letter_count(argv[1][i]);
				while (repeat--)
					write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}