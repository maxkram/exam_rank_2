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
	{
		while (i < n)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}

int		main()
{
	int start;
	int end;

	start = 0;
	end = 10;
	int *array;

	array = ft_rrange(start, end);
	int i = 0;
	while(i <= end)
	{
		printf("%d\n", array[i]);
		i++;
	}
}