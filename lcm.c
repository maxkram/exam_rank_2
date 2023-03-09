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
int	main(void)
{
	printf("%d\n", lcm(122, 22));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
	return (0);
}