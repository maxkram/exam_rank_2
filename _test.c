#include <stdlib.h>

int abc(int n)
{
	return n < 0 ? -n : n;
}

int *ft_range(int start, int end)
{
	int len = 1 + abs(end - start);
	int *arr = (int *)malloc(sizeof(int) * len);
	int step = start < end ? 1 : -1;
	int i = 0;
	while (i < len)
	{
		arr[i] = start;
		start += step;
		i++;
	}
	return (arr);
}

#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int start = atoi(av[1]);
		int end = atoi(av[2]);
		int *arr = ft_range(start, end);
		int i = 0;
		while (i < 1 + abc(end - start))
		{
			printf("%d, ", arr[i]);
			i++;
		}
		printf("\n");
	}
}