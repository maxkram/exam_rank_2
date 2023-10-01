#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_list.h"

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n = (a > b) ? a : b;

	while (a > 0 && b > 0)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		n++;
	}
	return (0);
}

int main()
{
	printf("%d\n", lcm(122, 22));
	printf("%d\n", lcm(0, 0));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
}