#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	char ltr;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			ltr = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				ltr = 'Z' - argv[1][i] + 'A';
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				ltr = 'z' - argv[1][i] + 'a';
			write(1, &ltr, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}