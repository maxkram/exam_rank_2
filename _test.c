#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned long int i = 1;
	while (i <= n)
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d\n", is_power_of_2(atoi(&av[1][0])));
	return (0);
}
