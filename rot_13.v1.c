#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i = 0;

		while (argv[1][i])
		{
			if ((argv[1][i] > 64 && argv[1][i] < 78) || (argv[1][i] > 96 && argv[1][i] < 110))
				argv[1][i] += 13;
			else if ((argv[1][i] > 77 && argv[1][i] < 91) || (argv[1][i] > 109 && argv[1][i] < 123))
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}