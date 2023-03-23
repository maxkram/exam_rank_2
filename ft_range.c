#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	n;
	int	*s;

	n = end >= start ? end - start : start - end;
	if (!(s= (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (end != start)
		*s++ = end > start ? start++ : start--;
	*s = start;
	return (s - n);
}


#include <stdio.h>
int main(void)
{
	int	start = 5;
	int	end = 10;
	int	*tab;
	int	i = 0;
	int	size = end - start + 1;
	tab = ft_range(start, end);
	while(i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.