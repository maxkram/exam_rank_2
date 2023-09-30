#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int	max(int* tab, unsigned int len)
{
	unsigned int i = -1;
	int res = 0;
	while (++i < len)
		if (res < tab[i])
			res = tab[i];
	return (res);
}

int main(void)
{
	int tab[] = {1, 6, 73, 12, 60, 31};
	printf("%d\n", max(tab, 6));

	write(1, "\n", 1);
	return (0);
}