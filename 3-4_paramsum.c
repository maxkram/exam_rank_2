#include <unistd.h>

void ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr(i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

int main(int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}

// Assignment name  : paramsum
// Expected files   : paramsum.cparamsum.cpa
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that displays the number of arguments passed to it, followed by
// a newline.

// If there are no arguments, just display a 0 followed by a newline.

// Example:

// $>./paramsum 1 2 3 5 7 24
// 6
// $>./paramsum 6 12 24 | cat -e
// 3$
// $>./paramsum | cat -e
// 0$
// $>