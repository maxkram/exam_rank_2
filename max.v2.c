int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int highest = -2147483648;
	unsigned int i = 0;
	while (i < len)
	{
		if (tab[i] > highest)
			highest = tab[i];
		i++;
	}
	return (highest);
}

#include <stdio.h>

int main(void)
{
	int nums01[] = {-2, -3, -776, -9};
	printf("%d\n", max(nums01, 4));
	int nums02[] = {-2, 101, 23};
	printf("%d\n", max(nums02, 3));
	int nums03[] = {-2, 101, 23, 200, -2000, 4000, 3999, 89};
	printf("%d\n", max(nums03, 8));
	return (0);
}