#include <unistd.h>

int is_space(char c)
{
	return (c == 32 || c == 9 || c == '\0');
}

int main(int ac, char **av)
{
	if (ac == 1)
		write(1, "\n", 1);
	
	int j = 0;
	while (++j < ac)
	{
		int i = 0;
		while (av[j][i])
		{
			if (av[j][i] > 64 && av[j][i] < 91 && !is_space(av[j][i + 1]))
				av[j][i] += 32;
			else if (av[j][i] > 96 && av[j][i] < 123 && is_space(av[j][i + 1]))
				av[j][i] -= 32;
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}