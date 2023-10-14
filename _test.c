#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	    is_power_of_2(unsigned int n)
{
	unsigned i = 1;
	while(i <= n)
	{
		if(i == n)
			return 1;
		i *= 2;
	}
	return 0;
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", is_power_of_2(atoi(&av[1][0])));
	write(1, "\n", 1);
	return 0;
}

// int main(int ac, char **av)
// {
// 	if(ac == 2)
// 	{
// 		int i = 0;
// 		while(av[1][i])
// 		{

// 		}
// 	}
// 	write(1, "\n", 1);
// 	return 0;
// }