#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int n1 = atoi(av[1]);
		int n2 = atoi(av[3]);
		switch (av[2][0])
		{
		case '+':
			printf("%d", n1 + n2);
			break;
		case '-':
			printf("%d", n1 - n2);
			break;
		case '*':
			printf("%d", n1 * n2);
			break;
		case '/':
			printf("%d", n1 / n2);
			break;
		case '%':
			printf("%d", n1 % n2);
			break;
		default:
			break;
		}
	}
	printf("\n");
	// write(1, "\n", 1);
	return (0);
}