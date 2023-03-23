void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

#include <stdio.h>

int main(void)
{
	int old_age = 223;
	int young_age = 1;
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	ft_swap(&old_age, &young_age);
	printf("swap them ages!\n");
	printf("old_age: %d\nyoung_age: %d\n", old_age, young_age);
	return 0;
}

// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);