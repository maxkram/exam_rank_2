#include <unistd.h>

int main(int argc, char **argv)
{
	int i, flg;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == ' ')
				flg = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == ' '))
			{
				if (flg)
					write(1, "   ", 3);
				flg = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}