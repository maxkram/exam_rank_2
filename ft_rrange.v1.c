#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int i = 0;
	int n = end - start + 1;
	int *range = (int *)malloc(sizeof(int) * n);

	if (start > end)
		return (ft_rrange(end, start));
	if (range)
		while (i < n)
			range[i++] = end--;
	return (range);
}

int		main(void)
{
	int start = 0;
	int end = 9;
	int *array = ft_rrange(start, end);
	int i = 0;
	while(i <= end)
		printf("%d\n", array[i++]);
}