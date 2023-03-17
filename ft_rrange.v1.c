#include <stdio.h>
#include <stdlib.h>

int *ft_rrange(int start, int end)
{
<<<<<<< HEAD
	int i = 0;
	int n = end - start + 1;
	int *range = (int *)malloc(sizeof(int) * n);
=======
	int n = end - start + 1;
	int *range = (int *)malloc(sizeof(int) * n);
	int i = 0;
>>>>>>> 4f837c8bc54ef53e2cb241ceac3673fbecaf35bf

	if (start > end)
		return (ft_rrange(end, start));
	if (range)
		while (i < n)
			range[i++] = end--;
	return (range);
}

<<<<<<< HEAD
int		main(void)
=======
int main(void)
>>>>>>> 4f837c8bc54ef53e2cb241ceac3673fbecaf35bf
{
	int start = 0;
	int end = 9;
	int *array = ft_rrange(start, end);
	int i = 0;
<<<<<<< HEAD
	while(i <= end)
=======

	while (i <= end)
>>>>>>> 4f837c8bc54ef53e2cb241ceac3673fbecaf35bf
		printf("%d\n", array[i++]);
}