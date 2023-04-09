void ft_swap(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

#include <stdio.h>

int main(void)
{
	int x = 223;
	int y = 1;
	printf("x: %d\ny: %d\n", x, y);
	ft_swap(&x, &y);
	printf("swap them!\n");
	printf("x: %d\ny: %d\n", x, y);
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