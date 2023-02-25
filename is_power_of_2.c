int	    is_power_of_2(unsigned int n)
{
	int test = 1;
	while (test <= n)
	{
		if (test == n)
			return (1);
		test *= 2;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
	printf("%d", is_power_of_2(16));
}