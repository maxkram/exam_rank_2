unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n;

	if (a == 0 || b == 0)
		return (0);
	n = (a > b) ? a : b;
	while(a > 0 && b > 0)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
	return (0);
}
#include <stdio.h>
int main(void)
{
	int x = 13;
	int y = 14;
	int z = 0;
	z = lcm(x, y);
	printf("%d\n", z);
	return (0);
}