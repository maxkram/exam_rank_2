#include <stdlib.h>

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*res;
	int	size;
	int	i;

	size = (end - start) + 1;
	i = 0;
	res = (int *) malloc(size * sizeof(int));
	if (!res)
		return (NULL);
	while (i++ < size)
		res[i] = start + i;
	return (res);
}

#include <stdio.h>

int		main()
{
	int start;
	int end;

	start = 0;
	end = 10;
	int *array;

	array = ft_range(start, end);
	int i = 0;
	while(i <= end)
	{
		printf("%d\n", array[i]);
		i++;
	}
}