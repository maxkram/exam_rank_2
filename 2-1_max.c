int	max(int* tab, unsigned int len)
{
	unsigned int i = -1;
	int res = 0;
	while (++i < len)
		if (res < tab[i])
			res = tab[i];
	return (res);
}

#include <stdio.h>
int main(void)
{
	int tab[] = {14, -7, 3, 6, 5, 1};
	printf("%d\n", max(tab, 6));
	return 0;
}

// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.
