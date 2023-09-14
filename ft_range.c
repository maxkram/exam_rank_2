#include <stdlib.h>

int ft_abs(int n)
{
	return (n < 0) ? -n : n;
}

int *ft_range(int start, int end)
{
	int len = 1 + ft_abs(end - start);
	int *arr = (int *)malloc(sizeof(int) * len);
	int step = (start < end) ? 1 : -1;
	int i = 0;
	while (i < len)
	{
		arr[i] = start;
		start += step;
		++i;
	}
	return (arr);
}

#include <stdio.h>

int main(void)
{
	int i = 0;
	int *prt = ft_range(1, 3);

	while (i <= 2)
		printf("%d ", prt[i++]);
	printf("\n");

	i = 0;
	prt = ft_range(-1, 2);
	while (i <= 3)
		printf("%d ", prt[i++]);
	printf("\n");

	i = 0;
	prt = ft_range(0, 0);
	while (i <= 0)
		printf("%d ", prt[i++]);
	printf("\n");

	i = 0;
	prt = ft_range(0, -3);
	while (i <= 3)
		printf("%d ", prt[i++]);
	printf("\n");
	return (0);
}

// Assignment name : ft_range
// Expected files : ft_range.c
// Allowed functions : malloc-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --

// Write the following function :

// 	int *
// 	ft_range(int start, int end);

// It must allocate(with malloc()) an array of integers, fill it with consecutive values that begin at start and end at end(Including start and end !), then return a pointer to the first value of the array.

// Examples :

// 	-With(1, 3) you will return an array containing 1,
// 	2 and 3. 
// - With(-1, 2) you will return an array containing - 1, 0, 1 and 2. 
// - With(0, 0) you will return an array containing 0. 
// - With(0, -3) you will return an array containing 0, -1, -2 and -3.