int	max(int* tab, unsigned int len)
{	
	unsigned int i = 0;
	int result = tab[i];
	
	while(i < len)
	{
		if (result <  tab[i])
			result = tab[i];
		i++;
	}
	return result;
}

#include <stdio.h>
int main(void)
{
	int tab[] = {14, -7, 3, 6, 5, 21};
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
