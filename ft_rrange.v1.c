#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int i = 0;
	int n = end - start + 1;

	if (start > end)
		return (ft_rrange(end, start));
	range = (int *)malloc(sizeof(int) * n);
	if (range)
		while (i < n)
			range[i++] = end--;
	return (range);
}

int		main()
{
	int start = 0;
	int end = 9;
	int *array;
	int i = 0;

	array = ft_rrange(start, end);
	while(i <= end)
		printf("%d\n", array[i++]);
}