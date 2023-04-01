#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			if ((av[1][i] > 64 && av[1][i] < 78) || (av[1][i] > 96 && av[1][i] < 110))
				av[1][i] += 13;
			else if ((av[1][i] > 77 && av[1][i] < 91) || (av[1][i] > 109 && av[1][i] < 123))
				av[1][i] -= 13;
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}