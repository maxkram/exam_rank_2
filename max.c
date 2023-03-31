int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max_value = 0;
	if (tab)
	{
		max_value = tab[0];
		while (i < len)
		{
			if (tab[i] > max_value)
				max_value = tab[i];
			i++;
		}
	}
	return (max_value);
}
#include <stdio.h>
int main(void)
{
	int tab[] = {4, 7, 3, 8, 5, 1};
	printf("%d", max(tab, 6));
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