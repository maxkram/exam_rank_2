#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	if (str[i] > 96 && str[i] < 123)
		str[i] -= 32;
	write(1, &str[i], 1);
	while (str[++i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] += 32;
		if ((str[i] > 96 & str[i] < 123) && ((str[i - 1] > 8 && str[i - 1] < 14) || str[i - 1] == 32))
			str[i] -= 32;
		write(1, &str[i], 1);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		while (i < ac)
			str_capitalizer(av[i++]);
	}
	write(1, "\n", 1);
	return (0);
}