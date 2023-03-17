#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	size = (end - start) + 1;
<<<<<<< HEAD
	int	*res = (int *) malloc(size * sizeof(int));
=======
	int	*res = (int *)malloc(size * sizeof(int));
>>>>>>> 4f837c8bc54ef53e2cb241ceac3673fbecaf35bf
	int	i = 0;

	if (!res)
		return (NULL);
	while (i++ < size)
		res[i] = start + i;
	return (res);
}

#include <stdio.h>

int		main()
{
	int start = 0;
	int end = 10;
<<<<<<< HEAD

=======
>>>>>>> 4f837c8bc54ef53e2cb241ceac3673fbecaf35bf
	int *array = ft_range(start, end);
	int i = 0;
	while(i <= end)
		printf("%d\n", array[i++]);
}