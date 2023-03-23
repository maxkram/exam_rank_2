#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		*rrange;
	int		i;
	if (start > end)
		i = (start - end) + 1;
	else
		i = (end - start) + 1;
	rrange = (int *)malloc(sizeof(int) * i);
	while (i--)
	{
		rrange[i] = start;
		start -= (start < end) ? (-1) : (1);
	}
	rrange[i] = end;
	return (rrange);
}
int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(-1, 2);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, 0);
	while(i <= 0)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, -3);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");
	return (0);
}


// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.