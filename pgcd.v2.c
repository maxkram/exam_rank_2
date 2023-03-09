#include <stdlib.h>
#include <stdio.h>

void pgcd(int n1, int n2)
{
	int div, pgcd;
	div = 1;
	if (n1 <= 0 || n2 <= 0)
		return ;
	while (div <= n1 || div <= n2)
	{
		if (n1 % div == 0 && n2 % div == 0)
			pgcd = div;
		div++;
	}
	printf("%d", pgcd);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}